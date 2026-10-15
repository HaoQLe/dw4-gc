// igBoolArrayMetaField: Alchemy class registration (0x80038978..0x80038B40). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igBoolArrayMetaField)
META_DECLARE(igBoolMetaField)

extern "C" {
void fn_80021B94();
void fn_8003EBC8(void *);
extern char igBoolArrayMetaField_dependencies[8];
void *igBoolArrayMetaField_parentMeta();
extern char lbl_80471914[];
extern char lbl_80473E30[];
}

// The base, built by its out-of-line constructor (fn_8003EBC8).
struct BaseInstance {
    void *__vtable;
    inline void operator delete(void *) {}
    inline BaseInstance() { fn_8003EBC8(this); }
};

struct Instance_80471914 : BaseInstance {
    char unknown04[8];
    igStringMember _fieldName;
    inline ~Instance_80471914() { __vtable = lbl_80471914; }
};

struct Instance_80473E30 : Instance_80471914 {
    inline ~Instance_80473E30() { __vtable = lbl_80473E30; }
};

struct igBoolArrayMetaFieldInstance : Instance_80473E30 {
    char unknown10[48];
    inline ~igBoolArrayMetaFieldInstance() { __vtable = igBoolArrayMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igBoolArrayMetaField)

META_GET_META(igBoolArrayMetaField)

void *igBoolArrayMetaField_vtableRead()
{
    igBoolArrayMetaFieldInstance object;
    object.__vtable = igBoolArrayMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBoolArrayMetaField)

void igBoolArrayMetaField_register()
{
    fn_80021B94();
    meta_registerClass(0, &igBoolArrayMetaField_meta, igBoolMetaField_register,
                       igBoolArrayMetaField_parentMeta, igBoolArrayMetaField_getMetaCall,
                       igBoolArrayMetaField_className, 0x38,
                       igBoolArrayMetaField_vtableRead, igBoolArrayMetaField_fieldInit, 0, igBoolArrayMetaField_dependencies);
}

META_GET_META_CALL(igBoolArrayMetaField)

}
#pragma pop
