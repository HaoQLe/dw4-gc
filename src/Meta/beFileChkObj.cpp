// beFileChkObj: Alchemy class registration (0x802DADF4..0x802DB078). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beFileChkObj)
META_DECLARE(igObject)

extern "C" {
extern char beFileChkObj_dependencies[8];
extern char beFileChkObj_fieldNames[];
extern char beFileChkObj_fieldOffsets[];
extern char beFileChkObj_fieldStorage[];
extern char beFileChkObj_fieldTypes[];
void *fn_800237D0();
void *fn_80030000();
void fn_802B1AC8();
}

struct beFileChkObjInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _fd;
    char unknown0C[4];
    inline ~beFileChkObjInstance() { __vtable = beFileChkObj_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beFileChkObj)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beFileChkObj)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beFileChkObj_vtableRead()
{
    beFileChkObjInstance object;
    object.__vtable = beFileChkObj_vtable;
    object._fd._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beFileChkObj)

void beFileChkObj_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beFileChkObj_meta, igObject_register,
                       fn_800237D0, beFileChkObj_getMetaCall,
                       beFileChkObj_className, 0xC,
                       beFileChkObj_vtableRead, beFileChkObj_fieldInit, 0, beFileChkObj_dependencies);
}

META_GET_META_CALL(beFileChkObj)

void beFileChkObj_fieldInit()
{
    Meta::igMetaObject *meta = beFileChkObj_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beFileChkObj_fieldTypes, 1);
    Meta::igObjectRefMetaField *fdField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80030000();
    fdField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    fdField->_construct = true;
    meta_setupFields(meta, beFileChkObj_fieldNames, beFileChkObj_fieldStorage, beFileChkObj_fieldOffsets, base);
}

}
#pragma pop
