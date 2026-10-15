// igMacroOpt: Alchemy class registration (0x80142464..0x80142760). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(igMacroOpt)
META_DECLARE(igOptBase)

extern "C" {
void *fn_80026B14();
void *fn_80071694(void *,void *);
void fn_8012FC48();
void *fn_801308D0();
extern char igMacroOpt_dependencies[8];
extern char igMacroOpt_fieldNames[8];
extern char igMacroOpt_fieldOffsets[8];
extern char igMacroOpt_fieldStorage[8];
extern char igMacroOpt_fieldTypes[8];
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

struct igMacroOptInstance : Instance_804A4A04 {
    igStringMember _fileName;
    igObjectRefMember _fileRegistry;
    char unknown30[8];
    inline ~igMacroOptInstance() { __vtable = igMacroOpt_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMacroOpt)

void *igMacroOpt_vtableRead()
{
    igMacroOptInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = igMacroOpt_vtable;
    object._fileName._value = 0;
    object._fileRegistry._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMacroOpt)

void igMacroOpt_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igMacroOpt_meta, igOptBase_register,
                       fn_801308D0, igMacroOpt_getMetaCall,
                       igMacroOpt_className, 0x30,
                       igMacroOpt_vtableRead, igMacroOpt_fieldInit, 0, igMacroOpt_dependencies);
}

META_GET_META_CALL(igMacroOpt)

void igMacroOpt_fieldInit()
{
    Meta::igMetaObject *meta = igMacroOpt_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMacroOpt_fieldTypes, 2);
    Meta::igStringMetaField *fileNameField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base));
    fn_80071694(fileNameField, (void *)0);
    Meta::igObjectRefMetaField *fileRegistryField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value4 = fn_80026B14();
    fileRegistryField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value4);
    fileRegistryField->_construct = true;
    meta_setupFields(meta, igMacroOpt_fieldNames, igMacroOpt_fieldStorage, igMacroOpt_fieldOffsets, base);
}

}
#pragma pop
