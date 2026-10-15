#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCameraMode_fieldInit();
void *beCameraMode_getMeta();
void beCameraMode_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802E170C();
void igViewMode_register();
extern char beCameraMode_className[];
extern char beCameraMode_dependencies[];
extern char beCameraMode_meta[];
void beCameraMode_register();
void *beCameraMode_getMetaCall();
}
extern "C" {
void beCameraMode_arkRegister(){
 meta_registerNow((int)beCameraMode_register);
}
void beCameraMode_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beCameraMode_meta,(int)igViewMode_register,(int)fn_802E170C,(int)beCameraMode_getMetaCall,(int)beCameraMode_className,120,(int)beCameraMode_vtableRead,(int)beCameraMode_fieldInit,0,(int)beCameraMode_dependencies);
}
void *beCameraMode_getMetaCall(){return beCameraMode_getMeta();}
}
#pragma pop
