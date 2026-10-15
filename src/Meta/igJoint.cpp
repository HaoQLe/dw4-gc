// igJoint: Alchemy class registration (0x801BBFC0..0x801BC078). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igJoint)
META_DECLARE(igTransform)

extern "C" {
void fn_801AA6DC();
void *fn_801BC078();
extern char igJoint_dependencies[8];
extern char lbl_805604EC[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igJoint)

void igJoint_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igJoint_meta, igTransform_register,
                       fn_801BC078, igJoint_getMetaCall,
                       lbl_805604EC, 0xB0,
                       igJoint_vtableRead, igJoint_fieldInit, 0, igJoint_dependencies);
}

META_GET_META_CALL(igJoint)

}
#pragma pop
