// igConvertAnimationsToCompressedSequencesQS: Alchemy class registration (0x8014E7F4..0x8014EB10). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igConvertAnimationsToCompressedSequencesQS)
META_DECLARE(igOptVisitObject)

extern "C" {
void *fn_80035694();
void fn_8003EC68(void *,int);
void fn_8012FC48();
void *fn_8012FEB0();
extern char igConvertAnimationsToCompressedSequencesQS_dependencies[8];
extern char igConvertAnimationsToCompressedSequencesQS_fieldNames[8];
extern char igConvertAnimationsToCompressedSequencesQS_fieldOffsets[8];
extern char igConvertAnimationsToCompressedSequencesQS_fieldStorage[8];
extern char igConvertAnimationsToCompressedSequencesQS_fieldTypes[8];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}

struct Instance_804A4A04 : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _registry;
    igObjectRefMember _configuration;
    inline ~Instance_804A4A04() { __vtable = lbl_804A4A04; }
};

struct Instance_804A46AC : Instance_804A4A04 {
    igObjectRefMember _visitedMetaObject;
    inline ~Instance_804A46AC() { __vtable = lbl_804A46AC; }
};

struct igConvertAnimationsToCompressedSequencesQSInstance : Instance_804A46AC {
    igObjectRefMember _lists;
    char unknown30[8];
    inline ~igConvertAnimationsToCompressedSequencesQSInstance() { __vtable = igConvertAnimationsToCompressedSequencesQS_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igConvertAnimationsToCompressedSequencesQS)

void *igConvertAnimationsToCompressedSequencesQS_vtableRead()
{
    igConvertAnimationsToCompressedSequencesQSInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = lbl_804A46AC;
    object._visitedMetaObject._value = 0;
    object.__vtable = igConvertAnimationsToCompressedSequencesQS_vtable;
    object._lists._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igConvertAnimationsToCompressedSequencesQS)

void igConvertAnimationsToCompressedSequencesQS_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igConvertAnimationsToCompressedSequencesQS_meta, igOptVisitObject_register,
                       fn_8012FEB0, igConvertAnimationsToCompressedSequencesQS_getMetaCall,
                       igConvertAnimationsToCompressedSequencesQS_className, 0x34,
                       igConvertAnimationsToCompressedSequencesQS_vtableRead, igConvertAnimationsToCompressedSequencesQS_fieldInit, 0, igConvertAnimationsToCompressedSequencesQS_dependencies);
}

META_GET_META_CALL(igConvertAnimationsToCompressedSequencesQS)

void igConvertAnimationsToCompressedSequencesQS_fieldInit()
{
    Meta::igMetaObject *meta = igConvertAnimationsToCompressedSequencesQS_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igConvertAnimationsToCompressedSequencesQS_fieldTypes, 2);
    Meta::igObjectRefMetaField *listsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80035694();
    listsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    listsField->_construct = true;
    listsField->_persistent = false;
    Meta::igBoolMetaField *shareListsField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 1));
    fn_8003EC68(shareListsField, 1);
    meta_setupFields(meta, igConvertAnimationsToCompressedSequencesQS_fieldNames, igConvertAnimationsToCompressedSequencesQS_fieldStorage, igConvertAnimationsToCompressedSequencesQS_fieldOffsets, base);
}

}
#pragma pop
