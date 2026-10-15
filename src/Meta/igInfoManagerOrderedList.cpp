// igInfoManagerOrderedList: Alchemy class registration (0x802869FC..0x80286CC8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igInfoManagerOrderedList)
META_DECLARE(igDependencyOrderedList)

extern "C" {
void *fn_8010E280();
void fn_80284294();
extern char igInfoManagerOrderedList_dependencies[8];
extern char lbl_804CB400[];
}

struct igDependencyOrderedListInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _objectList;
    igObjectRefMember _dependencies;
    igObjectRefMember _order;
    igObjectRefMember _checkPoints;
    inline ~igDependencyOrderedListInstance() { __vtable = igDependencyOrderedList_vtable; }
};

struct Instance_804CB400 : igDependencyOrderedListInstance {
    inline ~Instance_804CB400() { __vtable = lbl_804CB400; }
};

struct igInfoManagerOrderedListInstance : Instance_804CB400 {
    char unknown18[16];
    inline ~igInfoManagerOrderedListInstance() { __vtable = igInfoManagerOrderedList_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igInfoManagerOrderedList)

META_GET_META(igInfoManagerOrderedList)

void *igInfoManagerOrderedList_vtableRead()
{
    igInfoManagerOrderedListInstance object;
    object.__vtable = igDependencyOrderedList_vtable;
    object._objectList._value = 0;
    object._dependencies._value = 0;
    object._order._value = 0;
    object._checkPoints._value = 0;
    object.__vtable = lbl_804CB400;
    object.__vtable = igInfoManagerOrderedList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igInfoManagerOrderedList)

void igInfoManagerOrderedList_register()
{
    fn_80284294();
    meta_registerClass(0, &igInfoManagerOrderedList_meta, igDependencyOrderedList_register,
                       fn_8010E280, igInfoManagerOrderedList_getMetaCall,
                       igInfoManagerOrderedList_className, 0x1C,
                       igInfoManagerOrderedList_vtableRead, 0, 0, igInfoManagerOrderedList_dependencies);
}

META_GET_META_CALL(igInfoManagerOrderedList)

}
#pragma pop
