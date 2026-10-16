#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void igInverseKinematicsAnimation_arkRegister();
extern void *lbl_805621F4;
extern void *igInverseKinematicsAnimation_meta;
}
extern "C" {
void *fn_801BD190(){
 if(!igInverseKinematicsAnimation_meta) igInverseKinematicsAnimation_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igInverseKinematicsAnimation_meta;
}
}
#pragma pop
