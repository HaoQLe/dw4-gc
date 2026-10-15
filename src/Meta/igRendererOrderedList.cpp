// igRendererOrderedList: Alchemy class registration (0x8010E038..0x8010E280). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igRendererOrderedList)
META_DECLARE(igDependencyOrderedList)

extern "C" {
void fn_8010CBD4();
void *fn_8010E280();
extern char igRendererOrderedList_dependencies[8];
extern char lbl_80497BE4[];
}

struct igDependencyOrderedListInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _objectList;
    igObjectRefMember _dependencies;
    igObjectRefMember _order;
    igObjectRefMember _checkPoints;
    inline ~igDependencyOrderedListInstance() { __vtable = igDependencyOrderedList_vtable; }
};

struct Instance_80497BE4 : igDependencyOrderedListInstance {
    inline ~Instance_80497BE4() { __vtable = lbl_80497BE4; }
};

struct igRendererOrderedListInstance : Instance_80497BE4 {
    char unknown18[16];
    inline ~igRendererOrderedListInstance() { __vtable = igRendererOrderedList_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRendererOrderedList)

void *igRendererOrderedList_vtableRead()
{
    igRendererOrderedListInstance object;
    object.__vtable = igDependencyOrderedList_vtable;
    object._objectList._value = 0;
    object._dependencies._value = 0;
    object._order._value = 0;
    object._checkPoints._value = 0;
    object.__vtable = lbl_80497BE4;
    object.__vtable = igRendererOrderedList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRendererOrderedList)

void igRendererOrderedList_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igRendererOrderedList_meta, igDependencyOrderedList_register,
                       fn_8010E280, igRendererOrderedList_getMetaCall,
                       igRendererOrderedList_className, 0x1C,
                       igRendererOrderedList_vtableRead, 0, 0, igRendererOrderedList_dependencies);
}

META_GET_META_CALL(igRendererOrderedList)

}
#pragma pop
