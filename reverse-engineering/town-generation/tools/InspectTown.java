import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;
public class InspectTown extends GhidraScript {
 public void run() throws Exception {
  File out=new File(getScriptArgs()[0]);out.mkdirs();
  FunctionManager fm=currentProgram.getFunctionManager();
  Set<Function> roots=new LinkedHashSet<>();
  long[] strings={0x2d7f30L,0x2d7f5cL,0x393ac4L,0x393aecL,0x393b14L,0x393b3cL,0x9321dcL,0x932204L};
  try(PrintWriter w=new PrintWriter(new File(out,"template-xrefs.tsv"))) {
   w.println("target\tfrom\tfunction\treference_type");
   for(long s:strings) for(Reference r:getReferencesTo(toAddr(s))) {
    Function f=fm.getFunctionContaining(r.getFromAddress());
    w.println(toAddr(s)+"\t"+r.getFromAddress()+"\t"+(f==null?"":f.getEntryPoint())+"\t"+r.getReferenceType());
    if(f!=null) roots.add(f);
    for(Reference rr:getReferencesTo(r.getFromAddress())) {
     Function ff=fm.getFunctionContaining(rr.getFromAddress());
     w.println(toAddr(s)+"\t"+rr.getFromAddress()+"\t"+(ff==null?"":ff.getEntryPoint())+"\tvia "+r.getFromAddress());
     if(ff!=null) roots.add(ff);
    }
   }
  }
  try(PrintWriter w=new PrintWriter(new File(out,"functions.tsv"))) {
   w.println("entry\tname\tsize\tcallers\tcallees");
   for(Function f:fm.getFunctions(true)) {
    w.println(f.getEntryPoint()+"\t"+f.getName()+"\t"+f.getBody().getNumAddresses()+"\t"+addresses(f.getCallingFunctions(monitor))+"\t"+addresses(f.getCalledFunctions(monitor)));
   }
  }
  Set<Function> selected=new LinkedHashSet<>(roots);
  for(Function f:roots) selected.addAll(f.getCallingFunctions(monitor));
  Set<Function> upper=new LinkedHashSet<>(selected);
  for(Function f:upper) selected.addAll(f.getCallingFunctions(monitor));
  for(Function f:fm.getFunctions(true)) {
   long a=f.getEntryPoint().getOffset();
   if((a>=0x2d79bcL && a<0x2df000L) || (a>=0x231e00L && a<0x233c00L)) selected.add(f);
  }
  for(Function f:roots) selected.addAll(f.getCalledFunctions(monitor));
  Set<Function> frontier=new LinkedHashSet<>();
  Function candidate=fm.getFunctionAt(toAddr(0x2d7f88L));if(candidate!=null)frontier.add(candidate);
  for(int depth=0;depth<3;depth++) {
   Set<Function> next=new LinkedHashSet<>();
   for(Function f:frontier) { selected.add(f);next.addAll(f.getCalledFunctions(monitor)); }
   frontier=next;
  }
  selected.addAll(frontier);
  DecompInterface dec=new DecompInterface();dec.openProgram(currentProgram);
  try(PrintWriter w=new PrintWriter(new File(out,"root-functions.txt"))) {
   for(Function f:roots) w.println(f.getEntryPoint()+" "+f.getName());
  }
  for(Function f:selected) {
   DecompileResults result=dec.decompileFunction(f,90,monitor);
   try(PrintWriter w=new PrintWriter(new File(out,f.getEntryPoint()+".c"))) {
    w.println("/* Automated Ghidra output; types and names are provisional. */");
    if(result.decompileCompleted())w.println(result.getDecompiledFunction().getC());else w.println("/* "+result.getErrorMessage()+" */");
   }
  }
  dec.dispose();println("Functions: "+fm.getFunctionCount()+"; roots "+roots.size()+"; exports "+selected.size());
 }
 String addresses(Set<Function> fs) {List<String> a=new ArrayList<>();for(Function f:fs)a.add(f.getEntryPoint().toString());Collections.sort(a);return String.join(",",a);}
}
