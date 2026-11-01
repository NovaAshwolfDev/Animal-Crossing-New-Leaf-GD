extends SceneTree

func _initialize():
    var paths = OS.get_cmdline_user_args()
    if paths.is_empty():
        push_error("Pass imported model paths after --")
        quit(1)
        return
    var total_textures = 0
    for path in paths:
        var packed = load(path) as PackedScene
        if packed == null:
            push_error("Failed to load " + path)
            quit(2)
            return
        var instance = packed.instantiate()
        var meshes = instance.find_children("*", "MeshInstance3D", true, false)
        if instance is MeshInstance3D:
            meshes.append(instance)
        if meshes.is_empty():
            push_error("No meshes in " + path)
            quit(3)
            return
        var surfaces = 0
        var textures = 0
        for mesh in meshes:
            if mesh.mesh == null or mesh.mesh.get_surface_count() == 0:
                quit(4)
                return
            for index in mesh.mesh.get_surface_count():
                surfaces += 1
                var material = mesh.get_active_material(index)
                if material is BaseMaterial3D and material.albedo_texture != null:
                    textures += 1
        print("VALIDATED ", path, " meshes=", meshes.size(), " surfaces=", surfaces, " textured_surfaces=", textures)
        total_textures += textures
        instance.free()
    if total_textures == 0:
        push_error("No textured surfaces across supplied models")
        quit(5)
        return
    quit(0)
