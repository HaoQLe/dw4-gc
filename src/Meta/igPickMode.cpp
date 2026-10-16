// igPickMode: Alchemy class registration (0x80406AD8..0x80406E24). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igPickMode)
META_DECLARE(igViewMode)

extern "C" {
void fn_801285A0(void *);
void *fn_802E170C();
void fn_80402E28();
extern char igPickMode_dependencies[220];
extern char lbl_80495AD8[100];
}

struct Instance_LigPickMode_0 : igObjectInstance {
    inline Instance_LigPickMode_0()
    {
        __vtable = lbl_80495AD8;
    }
};

struct Instance_LigPickMode_1 : Instance_LigPickMode_0 {
    char unknown04[8];
    char unknown0C[64];
    inline Instance_LigPickMode_1()
    {
        __vtable = igViewMode_vtable;
        fn_801285A0(&unknown0C);
    }
};

struct igPickModeInstance : Instance_LigPickMode_1 {
    igObjectRefMember _parameters;
    igObjectRefMember _guiSystem;
    igObjectRefMember _cursor;
    igObjectRefMember _savedCursor;
    char unknown5C[4];
    igObjectRefMember _intersectTraversal;
    igObjectRefMember _ray;
    char unknown68[8];
    igObjectRefMember _hitPath;
    char unknown74[72];
    inline igPickModeInstance()
    {
        __vtable = igPickMode_vtable;
        _parameters._value = 0;
        _guiSystem._value = 0;
        _cursor._value = 0;
        _savedCursor._value = 0;
        _intersectTraversal._value = 0;
        _ray._value = 0;
        _hitPath._value = 0;
        fn_801285A0(&unknown74);
    }
    inline ~igPickModeInstance() { __vtable = igPickMode_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igPickMode)

META_GET_META(igPickMode)

void *igPickMode_vtableRead()
{
    igPickModeInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igPickMode)

void igPickMode_register()
{
    fn_80402E28();
    meta_registerClass(0, &igPickMode_meta, igViewMode_register,
                       fn_802E170C, igPickMode_getMetaCall,
                       igPickMode_className, 0xBC,
                       igPickMode_vtableRead, igPickMode_fieldInit, 0, igPickMode_dependencies);
}

META_GET_META_CALL(igPickMode)

}
#pragma pop
