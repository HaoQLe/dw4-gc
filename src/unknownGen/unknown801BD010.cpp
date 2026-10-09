#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801BC078();
void igInverseKinematicsHandle_fieldInit();
void *igInverseKinematicsHandle_getMeta();
void igInverseKinematicsHandle_vtableRead();
void igTransform_register();
extern char lbl_804AEF0C[];
extern char lbl_804AEF18[];
extern void *lbl_80564DF8;
void igInverseKinematicsHandle_register();
void *igInverseKinematicsHandle_getMetaCall();
}
extern "C" {
void fn_801BD010(){
 fn_80066188((int)igInverseKinematicsHandle_register);
}
void igInverseKinematicsHandle_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564DF8,(int)igTransform_register,(int)fn_801BC078,(int)igInverseKinematicsHandle_getMetaCall,(int)lbl_804AEF18,184,(int)igInverseKinematicsHandle_vtableRead,(int)igInverseKinematicsHandle_fieldInit,0,(int)lbl_804AEF0C);
}
void *igInverseKinematicsHandle_getMetaCall(){return igInverseKinematicsHandle_getMeta();}
}
#pragma pop
