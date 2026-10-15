// beNumVerData: Alchemy class registration (0x802C3498..0x802C36F0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNumVerData)
META_DECLARE(beNumVerInsideDataList)
META_DECLARE(igObject)

extern "C" {
extern char beNumVerData_dependencies[8];
extern char beNumVerData_fieldNames[];
extern char beNumVerData_fieldOffsets[];
extern char beNumVerData_fieldStorage[];
extern char beNumVerData_fieldTypes[];
void *fn_800237D0();
void fn_80053650(void *,int);
void fn_802B1AC8();
}

struct beNumVerDataInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _verDataList;
    inline ~beNumVerDataInstance() { __vtable = beNumVerData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beNumVerData)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beNumVerData_vtableRead()
{
    beNumVerDataInstance object;
    object.__vtable = beNumVerData_vtable;
    object._verDataList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNumVerData)

void beNumVerData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beNumVerData_meta, igObject_register,
                       fn_800237D0, beNumVerData_getMetaCall,
                       beNumVerData_className, 0x10,
                       beNumVerData_vtableRead, beNumVerData_fieldInit, 0, beNumVerData_dependencies);
}

META_GET_META_CALL(beNumVerData)

void beNumVerData_fieldInit()
{
    Meta::igMetaObject *meta = beNumVerData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNumVerData_fieldTypes, 2);
    Meta::igIntMetaField *dispField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base));
    fn_80053650(dispField, -1);
    Meta::igObjectRefMetaField *verDataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    verDataListField->_metaObject = beNumVerInsideDataList_metaObject();
    verDataListField->_construct = true;
    meta_setupFields(meta, beNumVerData_fieldNames, beNumVerData_fieldStorage, beNumVerData_fieldOffsets, base);
}

}
#pragma pop
