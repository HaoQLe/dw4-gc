// igInverseKinematicsJoint: Alchemy class registration (0x801BC980..0x801BCA38). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igInverseKinematicsJoint)
META_DECLARE(igJoint)

extern "C" {
void fn_801AA6DC();
void *igInverseKinematicsJoint_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igInverseKinematicsJoint)

void igInverseKinematicsJoint_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igInverseKinematicsJoint_meta, igJoint_register,
                       igInverseKinematicsJoint_parentMeta, igInverseKinematicsJoint_getMetaCall,
                       igInverseKinematicsJoint_className, 0x170,
                       igInverseKinematicsJoint_vtableRead, igInverseKinematicsJoint_fieldInit, 0, 0);
}

META_GET_META_CALL(igInverseKinematicsJoint)

}
#pragma pop
