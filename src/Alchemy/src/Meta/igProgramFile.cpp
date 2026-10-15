// igProgramFile: Alchemy class registration (0x8003A518..0x8003A784). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(igProgramFile)
META_DECLARE(igObject)

extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80030000();
extern char igProgramFile_dependencies[8];
extern char igProgramFile_fieldNames[8];
extern char igProgramFile_fieldOffsets[8];
extern char igProgramFile_fieldStorage[8];
extern char igProgramFile_fieldTypes[8];
}

struct igProgramFileInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _fileName;
    igObjectRefMember _file;
    inline ~igProgramFileInstance() { __vtable = igProgramFile_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igProgramFile)

void *igProgramFile_vtableRead()
{
    igProgramFileInstance object;
    object.__vtable = igProgramFile_vtable;
    object._fileName._value = 0;
    object._file._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igProgramFile)

void igProgramFile_register()
{
    fn_80021B94();
    meta_registerClass(0, &igProgramFile_meta, igObject_register,
                       fn_800237D0, igProgramFile_getMetaCall,
                       igProgramFile_className, 0x10,
                       igProgramFile_vtableRead, igProgramFile_fieldInit, 0, igProgramFile_dependencies);
}

META_GET_META_CALL(igProgramFile)

void igProgramFile_fieldInit()
{
    igProgramFile_meta->_persistent = false;
    Meta::igMetaObject *meta = igProgramFile_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igProgramFile_fieldTypes, 2);
    Meta::igStringMetaField *fileNameField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base));
    fileNameField->_persistent = false;
    Meta::igObjectRefMetaField *fileField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value4 = fn_80030000();
    fileField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value4);
    fileField->_construct = false;
    fileField->_persistent = false;
    meta_setupFields(meta, igProgramFile_fieldNames, igProgramFile_fieldStorage, igProgramFile_fieldOffsets, base);
}

}
#pragma pop
