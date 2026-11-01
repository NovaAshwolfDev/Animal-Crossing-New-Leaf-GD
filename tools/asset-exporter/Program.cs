using System;
using System.IO;
using System.IO.Compression;
using System.Linq;
using System.Text;
using System.Text.Json;
using System.Text.Json.Serialization;
using System.Xml.Serialization;
using SPICA.Formats.CtrGfx;
using SPICA.Formats.Generic.COLLADA;

class Program
{
    static readonly JsonSerializerOptions Json = new JsonSerializerOptions {
        IncludeFields = true, WriteIndented = true,
        ReferenceHandler = ReferenceHandler.IgnoreCycles,
        NumberHandling = JsonNumberHandling.AllowNamedFloatingPointLiterals,
        Converters = { new JsonStringEnumConverter() }
    };
    static string Safe(string s) => string.Concat(s.Select(c => char.IsLetterOrDigit(c) || "_- .".Contains(c) ? c : '_'));
    static void SaveJson(string path, object value) => File.WriteAllText(path, JsonSerializer.Serialize(value, value.GetType(), Json));
    static void Chunk(Stream output, string type, byte[] bytes) {
        void U32(uint n) { output.WriteByte((byte)(n >> 24)); output.WriteByte((byte)(n >> 16)); output.WriteByte((byte)(n >> 8)); output.WriteByte((byte)n); }
        U32((uint)bytes.Length);
        byte[] name = Encoding.ASCII.GetBytes(type);
        output.Write(name); output.Write(bytes);
        uint crc = 0xffffffff;
        foreach (byte b in name.Concat(bytes)) {
            crc ^= b;
            for (int k = 0; k < 8; k++) crc = (crc >> 1) ^ ((crc & 1) != 0 ? 0xedb88320u : 0);
        }
        U32(~crc);
    }
    static void Png(string path, byte[] rgba, int w, int h) {
        using var output = File.Create(path);
        output.Write(new byte[]{137,80,78,71,13,10,26,10});
        byte[] header = new byte[13];
        for (int i=0;i<4;i++) { header[i]=(byte)(w >> (24-i*8)); header[4+i]=(byte)(h >> (24-i*8)); }
        header[8]=8; header[9]=6; Chunk(output,"IHDR",header);
        using var compressed = new MemoryStream();
        using (var z = new ZLibStream(compressed, CompressionLevel.Optimal, true)) {
            // Match SPICA.ToBitmap: decoded RGBA rows are bottom-up.
            for(int y=h-1;y>=0;y--) { z.WriteByte(0); z.Write(rgba,y*w*4,w*4); }
        }
        Chunk(output,"IDAT",compressed.ToArray()); Chunk(output,"IEND",Array.Empty<byte>());
    }
    static Gfx OpenGfx(string file) {
        using var input=File.OpenRead(file);
        byte[] header=new byte[24]; input.ReadExactly(header); input.Position=0;
        if(Encoding.ASCII.GetString(header,20,4)=="DATA") return Gfx.Open(file);
        if(BitConverter.ToUInt32(header,8)!=0x04000000 || BitConverter.ToUInt16(header,6)!=0x14)
            throw new InvalidDataException("Unsupported CGFX header layout");
        // Three source shadow files omit the DATA section header. Relative body
        // pointers are valid; parse the body at the actual header end.
        var reader=new SPICA.Serialization.BinaryDeserializer(input,
            new SPICA.Serialization.SerializationOptions(SPICA.Serialization.LengthPos.BeforePtr,
                SPICA.Serialization.PointerType.SelfRelative));
        reader.Deserialize<GfxHeader>();
        input.Position=0x14;
        return reader.Deserialize<Gfx>();
    }
    static int Main(string[] args) {
        string root=Path.GetFullPath(args[0]), dest=Path.GetFullPath(args[1]);
        Directory.CreateDirectory(dest);
        string logPath=Path.Combine(dest,"conversion.jsonl");
        var previous=new System.Collections.Generic.Dictionary<string,JsonElement>();
        var validLines=new System.Collections.Generic.List<string>();
        if(File.Exists(logPath)) foreach(string line in File.ReadLines(logPath)) {
            try { var r=JsonDocument.Parse(line).RootElement.Clone(); previous[r.GetProperty("source").GetString()]=r; validLines.Add(line); }
            catch(JsonException) { }
        }
        File.WriteAllLines(logPath,validLines);
        using var log = new StreamWriter(logPath,true);
        int failures=0, files=0, models=0, textures=0, materials=0;
        foreach(var r in previous.Values.Where(r=>r.GetProperty("status").GetString()=="ok")) {
            files++; models+=r.GetProperty("models").GetInt32(); textures+=r.GetProperty("textures").GetInt32(); materials+=r.GetProperty("materials").GetInt32();
        }
        foreach(string file in Directory.EnumerateFiles(root,"*.bcres",SearchOption.AllDirectories).OrderBy(s=>s)) {
            string relative=Path.GetRelativePath(root,file);
            if(previous.TryGetValue(relative,out var prior) && prior.GetProperty("status").GetString()=="ok") continue;
            string dir=Path.Combine(dest,Path.ChangeExtension(relative,null));
            int nm=0, nt=0, nmat=0;
            try {
                var gfx=OpenGfx(file);
                Directory.CreateDirectory(dir);
                SaveJson(Path.Combine(dir,"source-models.json"),gfx.Models.Select(m=>new {
                    name=m.Name, meshes=m.Meshes.Count, shapes=m.Shapes.Count
                }).ToArray());
                foreach(var model in gfx.Models) foreach(var mat in model.Materials) {
                    SaveJson(Path.Combine(dir,Safe(model.Name)+"__"+Safe(mat.Name)+".material.json"),mat); nmat++;
                }
                foreach(var mat in gfx.Materials) { SaveJson(Path.Combine(dir,Safe(mat.Name)+".material.json"),mat); nmat++; }
                // Animation conversion is outside this model/texture extraction pass.
                gfx.SkeletalAnimations.Clear(); gfx.MaterialAnimations.Clear(); gfx.VisibilityAnimations.Clear();
                gfx.CameraAnimations.Clear(); gfx.LightAnimations.Clear(); gfx.FogAnimations.Clear();
                var scene=gfx.ToH3D();
                for(int i=0;i<scene.Textures.Count;i++) {
                    var t=scene.Textures[i];
                    Png(Path.Combine(dir,Safe(t.Name)+".png"),t.ToRGBA(),t.Width,t.Height); nt++;
                    if(t.IsCubeTexture) for(int f=1;f<6;f++) Png(Path.Combine(dir,Safe(t.Name)+"_face"+f+".png"),t.ToRGBA(f),t.Width,t.Height);
                }
                for(int i=0;i<scene.Models.Count;i++) {
                    var dae=new DAE(scene,i,-1,new DAEExportOptions{ ExportTextures=true, ExportSkinning=true });
                    for(int j=0;j<scene.Textures.Count;j++)
                        dae.library_images[j].init_from=Safe(scene.Textures[j].Name)+".png";
                    var usedImages = new System.Collections.Generic.HashSet<string>(
                        (dae.library_effects ?? new System.Collections.Generic.List<DAEEffect>())
                        .SelectMany(e=>e.profile_COMMON.newparam).Where(p=>p.surface!=null).Select(p=>p.surface.init_from));
                    dae.library_images?.RemoveAll(image=>!usedImages.Contains(image.id));
                    string path=Path.Combine(dir,Safe(scene.Models[i].Name)+".dae");
                    using(var stream=File.Create(path)) new XmlSerializer(typeof(DAE)).Serialize(stream,dae);
                    if(dae.ExportWarnings.Count>0) File.WriteAllLines(path+".warnings.txt",dae.ExportWarnings);
                    nm++;
                }
                log.WriteLine(JsonSerializer.Serialize(new{source=relative,status="ok",models=nm,textures=nt,materials=nmat}));
            } catch(Exception e) {
                failures++;
                log.WriteLine(JsonSerializer.Serialize(new{source=relative,status="failed",models=nm,textures=nt,materials=nmat,error=e.ToString()}));
            }
            files++; models+=nm; textures+=nt; materials+=nmat;
            if(files%250==0) { log.Flush(); Console.WriteLine($"{files} resources: {models} models, {textures} textures, {materials} materials, {failures} failures"); }
        }
        SaveJson(Path.Combine(dest,"summary.json"),new{files,models,textures,materials,failures});
        Console.WriteLine(File.ReadAllText(Path.Combine(dest,"summary.json")));
        return failures==0 ? 0 : 1;
    }
}
