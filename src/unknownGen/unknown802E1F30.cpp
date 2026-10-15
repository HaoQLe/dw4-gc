#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCameraBoxData_fieldInit();
void *beCameraBoxData_getMeta();
void beCameraBoxData_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beCameraBoxData_className[];
extern char lbl_804D2A60[];
extern char beCameraBoxData_meta[];
void beCameraBoxData_register();
void *beCameraBoxData_getMetaCall();
}
extern "C" {
void beCameraBoxData_registerNow(){
 meta_registerNow((int)beCameraBoxData_register);
}
void beCameraBoxData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beCameraBoxData_meta,(int)igObject_register,(int)fn_800237D0,(int)beCameraBoxData_getMetaCall,(int)beCameraBoxData_className,28,(int)beCameraBoxData_vtableRead,(int)beCameraBoxData_fieldInit,0,(int)lbl_804D2A60);
}
void *beCameraBoxData_getMetaCall(){return beCameraBoxData_getMeta();}
}
#pragma pop
