// beModelCtrl: Alchemy class registration (0x802CCDC4..0x802CCF98). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beModelCtrl)
META_DECLARE(beBaseInfoManager)
META_DECLARE(beLua)
META_DECLARE(beTargetObj)

extern "C" {
extern char beModelCtrl_dependencies[12];
extern char beModelCtrl_fieldNames[];
extern char beModelCtrl_fieldOffsets[];
extern char beModelCtrl_fieldStorage[];
extern char beModelCtrl_fieldTypes[];
void fn_802B1AC8();
void *fn_802B381C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrl)

META_ARK_REGISTER(beModelCtrl)

void beModelCtrl_register()
{
    fn_802B1AC8();
    meta_registerClass(1, &beModelCtrl_meta, beBaseInfoManager_register,
                       fn_802B381C, beModelCtrl_getMetaCall,
                       beModelCtrl_className, 0x2C,
                       0, beModelCtrl_fieldInit, 0, beModelCtrl_dependencies);
}

META_GET_META_CALL(beModelCtrl)

void beModelCtrl_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrl_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrl_fieldTypes, 3);
    Meta::igObjectRefMetaField *luaManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    luaManagerField->_metaObject = beLua_metaObject();
    luaManagerField->_refCounted = false;
    Meta::igObjectRefMetaField *targetObjField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    targetObjField->_metaObject = beTargetObj_metaObject();
    targetObjField->_refCounted = false;
    meta_setupFields(meta, beModelCtrl_fieldNames, beModelCtrl_fieldStorage, beModelCtrl_fieldOffsets, base);
}

}
#pragma pop
