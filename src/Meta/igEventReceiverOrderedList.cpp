// igEventReceiverOrderedList: Alchemy class registration (0x80112B04..0x80112D4C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igEventReceiverOrderedList)
META_DECLARE(igDependencyOrderedList)

extern "C" {
void fn_8010CBD4();
void *fn_8010E280();
extern char igEventReceiverOrderedList_dependencies[8];
extern char lbl_80497238[];
}

struct igDependencyOrderedListInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _objectList;
    igObjectRefMember _dependencies;
    igObjectRefMember _order;
    igObjectRefMember _checkPoints;
    inline ~igDependencyOrderedListInstance() { __vtable = igDependencyOrderedList_vtable; }
};

struct Instance_80497238 : igDependencyOrderedListInstance {
    inline ~Instance_80497238() { __vtable = lbl_80497238; }
};

struct igEventReceiverOrderedListInstance : Instance_80497238 {
    char unknown18[16];
    inline ~igEventReceiverOrderedListInstance() { __vtable = igEventReceiverOrderedList_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igEventReceiverOrderedList)

void *igEventReceiverOrderedList_vtableRead()
{
    igEventReceiverOrderedListInstance object;
    object.__vtable = igDependencyOrderedList_vtable;
    object._objectList._value = 0;
    object._dependencies._value = 0;
    object._order._value = 0;
    object._checkPoints._value = 0;
    object.__vtable = lbl_80497238;
    object.__vtable = igEventReceiverOrderedList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igEventReceiverOrderedList)

void igEventReceiverOrderedList_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igEventReceiverOrderedList_meta, igDependencyOrderedList_register,
                       fn_8010E280, igEventReceiverOrderedList_getMetaCall,
                       igEventReceiverOrderedList_className, 0x1C,
                       igEventReceiverOrderedList_vtableRead, 0, 0, igEventReceiverOrderedList_dependencies);
}

META_GET_META_CALL(igEventReceiverOrderedList)

}
#pragma pop
