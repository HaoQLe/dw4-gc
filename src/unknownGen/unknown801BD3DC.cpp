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
extern char lbl_804AEFAC[];
extern char igInverseKinematicsAnimation_className[];
extern void *igInverseKinematicsAnimation_meta;
extern void *igAnimation_meta;
void igInverseKinematicsAnimation_register();
void *igInverseKinematicsAnimation_getMetaCall();
void *igInverseKinematicsAnimation_parentMeta();
}
extern "C" {
void igInverseKinematicsAnimation_registerNow(){
 meta_registerNow((int)igInverseKinematicsAnimation_register);
}
void igInverseKinematicsAnimation_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igInverseKinematicsAnimation_meta,(int)igAnimation_register,(int)igInverseKinematicsAnimation_parentMeta,(int)igInverseKinematicsAnimation_getMetaCall,(int)igInverseKinematicsAnimation_className,176,(int)igInverseKinematicsAnimation_vtableRead,(int)igInverseKinematicsAnimation_fieldInit,0,(int)lbl_804AEFAC);
}
void *igInverseKinematicsAnimation_getMetaCall(){return igInverseKinematicsAnimation_getMeta();}
void *igInverseKinematicsAnimation_parentMeta(){return igAnimation_meta;}
}
#pragma pop
