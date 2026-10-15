// igStandardQueue: Alchemy class registration (0x8003AAE8..0x8003AD10). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igStandardQueue)
META_DECLARE(igQueue)

extern "C" {
void fn_80021B94();
extern char igStandardQueue_dependencies[8];
void *igStandardQueue_parentMeta();
extern char lbl_8047156C[];
}

struct Instance_8047156C : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _serviceThreads;
    inline ~Instance_8047156C() { __vtable = lbl_8047156C; }
};

struct igStandardQueueInstance : Instance_8047156C {
    igObjectRefMember _insertLock;
    igObjectRefMember _removeLock;
    igObjectRefMember _queueSema;
    char unknown18[32];
    inline ~igStandardQueueInstance() { __vtable = igStandardQueue_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igStandardQueue)

void *igStandardQueue_vtableRead()
{
    igStandardQueueInstance object;
    object.__vtable = lbl_8047156C;
    object._serviceThreads._value = 0;
    object.__vtable = igStandardQueue_vtable;
    object._insertLock._value = 0;
    object._removeLock._value = 0;
    object._queueSema._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igStandardQueue)

void igStandardQueue_register()
{
    fn_80021B94();
    meta_registerClass(0, &igStandardQueue_meta, igQueue_register,
                       igStandardQueue_parentMeta, igStandardQueue_getMetaCall,
                       igStandardQueue_className, 0x2C,
                       igStandardQueue_vtableRead, igStandardQueue_fieldInit, 0, igStandardQueue_dependencies);
}

}
#pragma pop
