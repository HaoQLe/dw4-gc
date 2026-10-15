// igOptimizeActorSkinsInScenes: Alchemy class registration (0x80139DD0..0x8013A034). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igOptimizeActorSkinsInScenes)
META_DECLARE(igMacroOpt)

extern "C" {
void fn_8012FC48();
void *igOptimizeActorSkinsInScenes_parentMeta();
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}

struct Instance_804A4A04 : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _registry;
    igObjectRefMember _configuration;
    inline ~Instance_804A4A04() { __vtable = lbl_804A4A04; }
};

struct igMacroOptInstance : Instance_804A4A04 {
    igStringMember _fileName;
    igObjectRefMember _fileRegistry;
    inline ~igMacroOptInstance() { __vtable = igMacroOpt_vtable; }
};

struct igOptimizeActorSkinsInScenesInstance : igMacroOptInstance {
    char unknown30[8];
    inline ~igOptimizeActorSkinsInScenesInstance() { __vtable = igOptimizeActorSkinsInScenes_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igOptimizeActorSkinsInScenes)

void *igOptimizeActorSkinsInScenes_vtableRead()
{
    igOptimizeActorSkinsInScenesInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = igMacroOpt_vtable;
    object._fileName._value = 0;
    object._fileRegistry._value = 0;
    object.__vtable = igOptimizeActorSkinsInScenes_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igOptimizeActorSkinsInScenes)

void igOptimizeActorSkinsInScenes_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igOptimizeActorSkinsInScenes_meta, igMacroOpt_register,
                       igOptimizeActorSkinsInScenes_parentMeta, igOptimizeActorSkinsInScenes_getMetaCall,
                       igOptimizeActorSkinsInScenes_className, 0x30,
                       igOptimizeActorSkinsInScenes_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igOptimizeActorSkinsInScenes)

}
#pragma pop
