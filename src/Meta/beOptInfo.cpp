// beOptInfo: Alchemy class registration (0x802C2960..0x802C2C50). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beOptInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beOptInfo_fieldNames[];
extern char beOptInfo_fieldOffsets[];
extern char beOptInfo_fieldStorage[];
extern char beOptInfo_fieldTypes[];
void *fn_800284EC();
void fn_80071694(void *,int);
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igInfoInstance : igNamedObjectInstance {
    inline ~igInfoInstance() { __vtable = igInfo_vtable; }
};

struct beOptInfoInstance : igInfoInstance {
    char unknown0C[16];
    igStringMember _libOpt;
    igStringMember _libAsm;
    char unknown24[4];
    inline ~beOptInfoInstance() { __vtable = beOptInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beOptInfo)

#pragma push
#pragma optimize_for_size off
void *beOptInfo_vtableRead()
{
    beOptInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = beOptInfo_vtable;
    object._libOpt._value = 0;
    object._libAsm._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beOptInfo)

void beOptInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beOptInfo_meta, igInfo_register,
                       fn_800284EC, beOptInfo_getMetaCall,
                       beOptInfo_className, 0x24,
                       beOptInfo_vtableRead, beOptInfo_fieldInit, 0, 0);
}

META_GET_META_CALL(beOptInfo)

void beOptInfo_fieldInit()
{
    Meta::igMetaObject *meta = beOptInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beOptInfo_fieldTypes, 4);
    Meta::igStringMetaField *libOptField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 2));
    fn_80071694(libOptField, 0);
    Meta::igStringMetaField *libAsmField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 3));
    fn_80071694(libAsmField, 0);
    meta_setupFields(meta, beOptInfo_fieldNames, beOptInfo_fieldStorage, beOptInfo_fieldOffsets, base);
}

}
#pragma pop
