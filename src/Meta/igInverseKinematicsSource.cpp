// igInverseKinematicsSource: Alchemy class registration (0x801BC100..0x801BC288). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igInverseKinematicsSource)
META_DECLARE(igAnimationSequence)

extern "C" {
void fn_801AA6DC();
void *fn_801BC288();
extern char igInverseKinematicsSource_dependencies[8];
extern char lbl_804B796C[];
extern char lbl_804BA150[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igInverseKinematicsSource)

META_GET_META(igInverseKinematicsSource)

void *igInverseKinematicsSource_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804BA150;
    object.__vtable = lbl_804B796C;
    object.__vtable = igInverseKinematicsSource_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igInverseKinematicsSource)

void igInverseKinematicsSource_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igInverseKinematicsSource_meta, igAnimationSequence_register,
                       fn_801BC288, igInverseKinematicsSource_getMetaCall,
                       igInverseKinematicsSource_className, 0x14,
                       igInverseKinematicsSource_vtableRead, igInverseKinematicsSource_fieldInit, 0, igInverseKinematicsSource_dependencies);
}

META_GET_META_CALL(igInverseKinematicsSource)

}
#pragma pop
