// beNDMWStatusCtrlSkill: Alchemy class registration (0x80330A94..0x80330C20). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWStatusCtrlSkill)
META_DECLARE(beNDMWListCtrl)
META_DECLARE(beNDMWShinkaCtrl)

extern "C" {
extern char beNDMWStatusCtrlSkill_dependencies[12];
extern char beNDMWStatusCtrlSkill_fieldNames[];
extern char beNDMWStatusCtrlSkill_fieldOffsets[];
extern char beNDMWStatusCtrlSkill_fieldStorage[];
extern char beNDMWStatusCtrlSkill_fieldTypes[];
void *fn_800365B4();
void fn_803250AC();
void *fn_8032BD54();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWStatusCtrlSkill)

void beNDMWStatusCtrlSkill_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStatusCtrlSkill_meta, beNDMWListCtrl_register,
                       fn_8032BD54, beNDMWStatusCtrlSkill_getMetaCall,
                       beNDMWStatusCtrlSkill_className, 0x6C,
                       beNDMWStatusCtrlSkill_vtableRead, beNDMWStatusCtrlSkill_fieldInit, 0, beNDMWStatusCtrlSkill_dependencies);
}

META_GET_META_CALL(beNDMWStatusCtrlSkill)

void beNDMWStatusCtrlSkill_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWStatusCtrlSkill_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWStatusCtrlSkill_fieldTypes, 3);
    Meta::igObjectRefMetaField *shinkaCtrlField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    shinkaCtrlField->_metaObject = beNDMWShinkaCtrl_metaObject();
    shinkaCtrlField->_construct = true;
    Meta::igObjectRefMetaField *skillListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_value5 = fn_800365B4();
    skillListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    skillListField->_construct = true;
    meta_setupFields(meta, beNDMWStatusCtrlSkill_fieldNames, beNDMWStatusCtrlSkill_fieldStorage, beNDMWStatusCtrlSkill_fieldOffsets, base);
}

}
#pragma pop
