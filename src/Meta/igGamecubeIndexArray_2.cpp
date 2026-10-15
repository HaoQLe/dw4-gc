// igGamecubeIndexArray: Alchemy class registration (0x800D8568..0x800D86D4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGamecubeIndexArray)
META_DECLARE(igIndexArray)

extern "C" {
void fn_800CE2F8();
void fn_800D86DC();
void *igGamecubeIndexArray_parentMeta();
extern char lbl_804926E0[];
}

struct Instance_804926E0 : igObjectInstance {
    char unknown04[4];
    igObjectRefMember unknown08;
    inline ~Instance_804926E0() { __vtable = lbl_804926E0; }
};

struct igGamecubeIndexArrayInstance : Instance_804926E0 {
    char unknown0C[20];
    inline ~igGamecubeIndexArrayInstance() { __vtable = igGamecubeIndexArray_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGamecubeIndexArray)

void *igGamecubeIndexArray_vtableRead()
{
    igGamecubeIndexArrayInstance object;
    object.__vtable = lbl_804926E0;
    object.unknown08._value = 0;
    object.__vtable = igGamecubeIndexArray_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGamecubeIndexArray)

void igGamecubeIndexArray_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igGamecubeIndexArray_meta, igIndexArray_register,
                       igGamecubeIndexArray_parentMeta, igGamecubeIndexArray_getMetaCall,
                       igGamecubeIndexArray_className, 0x1C,
                       igGamecubeIndexArray_vtableRead, fn_800D86DC, 0, 0);
}

}
#pragma pop
