// beTimerData: Alchemy class registration (0x802B5C74..0x802B5EF4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beTimerData)
META_DECLARE(igObject)

extern "C" {
extern char beTimerData_fieldNames[];
extern char beTimerData_fieldOffsets[];
extern char beTimerData_fieldStorage[];
extern char beTimerData_fieldTypes[];
void *fn_800237D0();
void fn_80071694(void *,int);
void fn_802B1AC8();
}

struct beTimerDataInstance : igObjectInstance {
    char unknown04[12];
    igStringMember _resetCondition;
    igStringMember _callLuaFile;
    char unknown18[8];
    inline ~beTimerDataInstance() { __vtable = beTimerData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beTimerData)

void *beTimerData_vtableRead()
{
    beTimerDataInstance object;
    object.__vtable = beTimerData_vtable;
    object._resetCondition._value = 0;
    object._callLuaFile._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beTimerData)

void beTimerData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beTimerData_meta, igObject_register,
                       fn_800237D0, beTimerData_getMetaCall,
                       beTimerData_className, 0x20,
                       beTimerData_vtableRead, beTimerData_fieldInit, 0, 0);
}

META_GET_META_CALL(beTimerData)

void beTimerData_fieldInit()
{
    Meta::igMetaObject *meta = beTimerData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beTimerData_fieldTypes, 4);
    Meta::igStringMetaField *resetConditionField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 1));
    fn_80071694(resetConditionField, 0);
    Meta::igStringMetaField *callLuaFileField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 2));
    fn_80071694(callLuaFileField, 0);
    meta_setupFields(meta, beTimerData_fieldNames, beTimerData_fieldStorage, beTimerData_fieldOffsets, base);
}

}
#pragma pop
