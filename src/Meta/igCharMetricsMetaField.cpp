// igCharMetricsMetaField: Alchemy class registration (0x80114F90..0x80115154). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCharMetricsMetaField)
META_DECLARE(igCompoundMetaField)

extern "C" {
void *fn_80033638();
void fn_800638E0(void *);
void fn_8010CBD4();
extern char igCharMetricsMetaField_dependencies[8];
extern char lbl_80471914[];
extern char lbl_80474018[];
}

// The base, built by its out-of-line constructor (fn_800638E0).
struct BaseInstance {
    void *__vtable;
    inline void operator delete(void *) {}
    inline BaseInstance() { fn_800638E0(this); }
};

struct Instance_80471914 : BaseInstance {
    char unknown04[8];
    igStringMember _fieldName;
    inline ~Instance_80471914() { __vtable = lbl_80471914; }
};

struct Instance_80474018 : Instance_80471914 {
    char unknown10[36];
    igObjectRefMember _fieldList;
    inline ~Instance_80474018() { __vtable = lbl_80474018; }
};

struct igCharMetricsMetaFieldInstance : Instance_80474018 {
    char unknown38[8];
    inline ~igCharMetricsMetaFieldInstance() { __vtable = igCharMetricsMetaField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCharMetricsMetaField)

void *igCharMetricsMetaField_vtableRead()
{
    igCharMetricsMetaFieldInstance object;
    object.__vtable = lbl_80474018;
    object._fieldList._value = 0;
    object.__vtable = igCharMetricsMetaField_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCharMetricsMetaField)

void igCharMetricsMetaField_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igCharMetricsMetaField_meta, igCompoundMetaField_register,
                       fn_80033638, igCharMetricsMetaField_getMetaCall,
                       igCharMetricsMetaField_className, 0x38,
                       igCharMetricsMetaField_vtableRead, 0, 0, igCharMetricsMetaField_dependencies);
}

META_GET_META_CALL(igCharMetricsMetaField)

}
#pragma pop
