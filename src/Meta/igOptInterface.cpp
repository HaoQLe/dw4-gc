// igOptInterface: Alchemy class registration (0x8013B434..0x8013B680). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igOptInterface)
META_DECLARE(igInterface)

extern "C" {
void fn_8012FC48();
void *fn_8013B680();
extern char igOptInterface_dependencies[16];
extern char lbl_804A6460[];
}

struct igOptInterfaceInstance : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _optimizationList;
    igStringMember _filePath;
    igObjectRefMember _file;
    igObjectRefMember _disabledInfos;
    char unknown30[8];
    inline ~igOptInterfaceInstance() { __vtable = igOptInterface_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igOptInterface)

void *igOptInterface_vtableRead()
{
    igOptInterfaceInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = igInterface_vtable;
    object.__vtable = igOptInterface_vtable;
    object._optimizationList._value = 0;
    object._filePath._value = 0;
    object._file._value = 0;
    object._disabledInfos._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igOptInterface)

void igOptInterface_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igOptInterface_meta, igInterface_register,
                       fn_8013B680, igOptInterface_getMetaCall,
                       igOptInterface_className, 0x30,
                       igOptInterface_vtableRead, igOptInterface_fieldInit, 0, igOptInterface_dependencies);
}

META_GET_META_CALL(igOptInterface)

}
#pragma pop
