#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802E170C();
void fn_80402E28();
void igCameraMode_fieldInit();
void *igCameraMode_getMeta();
void igCameraMode_vtableRead();
void igViewMode_register();
extern char igCameraMode_className[];
extern char igCameraMode_dependencies[];
extern char igCameraMode_meta[];
void igCameraMode_register();
void *igCameraMode_getMetaCall();
}
extern "C" {
void igCameraMode_arkRegister(){
 meta_registerNow((int)igCameraMode_register);
}
void igCameraMode_register(){
 fn_80402E28();
 meta_registerClass(0,(int)igCameraMode_meta,(int)igViewMode_register,(int)fn_802E170C,(int)igCameraMode_getMetaCall,(int)igCameraMode_className,84,(int)igCameraMode_vtableRead,(int)igCameraMode_fieldInit,0,(int)igCameraMode_dependencies);
}
void *igCameraMode_getMetaCall(){return igCameraMode_getMeta();}
}
#pragma pop
