// igCustomMatrixState: Alchemy class registration (0x800D5358..0x800D55B8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCustomMatrixState)
META_DECLARE(igCustomState)
META_DECLARE(igNamedObject)

extern "C" {
void fn_800CE2F8();
void *fn_800D5128();
void fn_801285A0(void *);
extern char igCustomMatrixState_fieldNames[4];
extern char igCustomMatrixState_fieldOffsets[4];
extern char igCustomMatrixState_fieldStorage[4];
extern char igCustomMatrixState_fieldTypes[4];
extern char lbl_80493290[96];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline igNamedObjectInstance()
    {
        __vtable = igNamedObject_vtable;
        _name._value = 0;
    }
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_80493290 : igNamedObjectInstance {
    inline Instance_80493290()
    {
        __vtable = lbl_80493290;
    }
    inline ~Instance_80493290() { __vtable = lbl_80493290; }
};

struct igCustomMatrixStateInstance : Instance_80493290 {
    char unknown0C[64];
    inline igCustomMatrixStateInstance()
    {
        __vtable = igCustomMatrixState_vtable;
        fn_801285A0(&unknown0C);
    }
    inline ~igCustomMatrixStateInstance() { __vtable = igCustomMatrixState_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igCustomMatrixState)

META_GET_META(igCustomMatrixState)

void *igCustomMatrixState_vtableRead()
{
    igCustomMatrixStateInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCustomMatrixState)

void igCustomMatrixState_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igCustomMatrixState_meta, igCustomState_register,
                       fn_800D5128, igCustomMatrixState_getMetaCall,
                       igCustomMatrixState_className, 0x4C,
                       igCustomMatrixState_vtableRead, igCustomMatrixState_fieldInit, 0, 0);
}

META_GET_META_CALL(igCustomMatrixState)

void igCustomMatrixState_fieldInit()
{
    Meta::igMetaObject *meta = igCustomMatrixState_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCustomMatrixState_fieldTypes, 1);
    meta_setupFields(meta, igCustomMatrixState_fieldNames, igCustomMatrixState_fieldStorage, igCustomMatrixState_fieldOffsets, base);
}

}
#pragma pop
