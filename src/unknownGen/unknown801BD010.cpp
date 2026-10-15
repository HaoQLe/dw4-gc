#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801BC078();
void igInverseKinematicsHandle_fieldInit();
void *igInverseKinematicsHandle_getMeta();
void igInverseKinematicsHandle_vtableRead();
void igTransform_register();
extern char lbl_804AEF0C[];
extern char igInverseKinematicsHandle_className[];
extern void *igInverseKinematicsHandle_meta;
void igInverseKinematicsHandle_register();
void *igInverseKinematicsHandle_getMetaCall();
}
extern "C" {
void igInverseKinematicsHandle_registerNow(){
 meta_registerNow((int)igInverseKinematicsHandle_register);
}
void igInverseKinematicsHandle_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igInverseKinematicsHandle_meta,(int)igTransform_register,(int)fn_801BC078,(int)igInverseKinematicsHandle_getMetaCall,(int)igInverseKinematicsHandle_className,184,(int)igInverseKinematicsHandle_vtableRead,(int)igInverseKinematicsHandle_fieldInit,0,(int)lbl_804AEF0C);
}
void *igInverseKinematicsHandle_getMetaCall(){return igInverseKinematicsHandle_getMeta();}
}
#pragma pop
