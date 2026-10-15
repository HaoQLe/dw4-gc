// beCriFxInfo: Alchemy class registration (0x802DF094..0x802DF3C0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beCriFxInfo)
META_DECLARE(beCriFxXbData)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beCriFxInfo_dependencies[8];
extern char beCriFxInfo_fieldNames[];
extern char beCriFxInfo_fieldOffsets[];
extern char beCriFxInfo_fieldStorage[];
extern char beCriFxInfo_fieldTypes[];
void *fn_800284EC();
void fn_80053650(void *,int);
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

struct beCriFxInfoInstance : igInfoInstance {
    char unknown0C[8];
    igStringMember _target;
    char unknown18[8];
    igObjectRefMember _xbFxParam;
    char unknown24[4];
    inline ~beCriFxInfoInstance() { __vtable = beCriFxInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beCriFxInfo)

void *beCriFxInfo_vtableRead()
{
    beCriFxInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = beCriFxInfo_vtable;
    object._target._value = 0;
    object._xbFxParam._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beCriFxInfo)

void beCriFxInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beCriFxInfo_meta, igInfo_register,
                       fn_800284EC, beCriFxInfo_getMetaCall,
                       beCriFxInfo_className, 0x24,
                       beCriFxInfo_vtableRead, beCriFxInfo_fieldInit, 0, beCriFxInfo_dependencies);
}

META_GET_META_CALL(beCriFxInfo)

void beCriFxInfo_fieldInit()
{
    Meta::igMetaObject *meta = beCriFxInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beCriFxInfo_fieldTypes, 4);
    Meta::igStringMetaField *targetField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base));
    fn_80071694(targetField, 0);
    Meta::igIntMetaField *reverbField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    fn_80053650(reverbField, -1);
    Meta::igIntMetaField *delayField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 2));
    fn_80053650(delayField, -1);
    Meta::igObjectRefMetaField *xbFxParamField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    xbFxParamField->_metaObject = beCriFxXbData_metaObject();
    meta_setupFields(meta, beCriFxInfo_fieldNames, beCriFxInfo_fieldStorage, beCriFxInfo_fieldOffsets, base);
}

}
#pragma pop
