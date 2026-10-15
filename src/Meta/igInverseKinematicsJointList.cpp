// igInverseKinematicsJointList: Alchemy class registration (0x801BC658..0x801BC7B8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igInverseKinematicsJointList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igInverseKinematicsJointList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B7908[];
}

struct Instance_801BC694_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igInverseKinematicsJointList)

void *igInverseKinematicsJointList_vtableRead()
{
    Instance_801BC694_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B7908;
    object.__vtable = igInverseKinematicsJointList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igInverseKinematicsJointList)

void igInverseKinematicsJointList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igInverseKinematicsJointList_meta, igObjectList_register,
                       fn_80024180, igInverseKinematicsJointList_getMetaCall,
                       igInverseKinematicsJointList_className, 0x14,
                       igInverseKinematicsJointList_vtableRead, 0, 0, igInverseKinematicsJointList_dependencies);
}

META_GET_META_CALL(igInverseKinematicsJointList)

}
#pragma pop
