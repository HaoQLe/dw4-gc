#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void igAnimation_register();
void igInverseKinematicsAnimation_fieldInit();
void *igInverseKinematicsAnimation_getMeta();
void igInverseKinematicsAnimation_vtableRead();
extern char igInverseKinematicsAnimation_dependencies[];
extern char igInverseKinematicsAnimation_className[];
extern void *igInverseKinematicsAnimation_meta;
extern void *igAnimation_meta;
void igInverseKinematicsAnimation_register();
void *igInverseKinematicsAnimation_getMetaCall();
void *igInverseKinematicsAnimation_parentMeta();
}
extern "C" {
void *igInverseKinematicsAnimation_parentMeta(){return igAnimation_meta;}
}
#pragma pop
