#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void igInverseKinematicsJoint_fieldInit();
void *igInverseKinematicsJoint_getMeta();
void igInverseKinematicsJoint_vtableRead();
void igJoint_register();
extern char igInverseKinematicsJoint_className[];
extern void *igJoint_meta;
extern void *igInverseKinematicsJoint_meta;
void igInverseKinematicsJoint_register();
void *igInverseKinematicsJoint_getMetaCall();
void *igInverseKinematicsJoint_parentMeta();
}
extern "C" {
void *igInverseKinematicsJoint_parentMeta(){return igJoint_meta;}
}
#pragma pop
