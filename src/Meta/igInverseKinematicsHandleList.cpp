// igInverseKinematicsHandleList: Alchemy class registration (0x801BCB58..0x801BCCB8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igInverseKinematicsHandleList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igInverseKinematicsHandleList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B7840[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igInverseKinematicsHandleList)

void *igInverseKinematicsHandleList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B7840;
    object.__vtable = igInverseKinematicsHandleList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igInverseKinematicsHandleList)

void igInverseKinematicsHandleList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igInverseKinematicsHandleList_meta, igObjectList_register,
                       fn_80024180, igInverseKinematicsHandleList_getMetaCall,
                       igInverseKinematicsHandleList_className, 0x14,
                       igInverseKinematicsHandleList_vtableRead, 0, 0, igInverseKinematicsHandleList_dependencies);
}

META_GET_META_CALL(igInverseKinematicsHandleList)

}
#pragma pop
