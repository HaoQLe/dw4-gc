#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beCameraCtrlInfo_fieldInit();
void *beCameraCtrlInfo_getMeta();
void beCameraCtrlInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char beCameraCtrlInfo_className[];
extern char lbl_804D2A10[];
extern char beCameraCtrlInfo_meta[];
void beCameraCtrlInfo_register();
void *beCameraCtrlInfo_getMetaCall();
}
extern "C" {
void beCameraCtrlInfo_registerNow(){
 meta_registerNow((int)beCameraCtrlInfo_register);
}
void beCameraCtrlInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beCameraCtrlInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beCameraCtrlInfo_getMetaCall,(int)beCameraCtrlInfo_className,32,(int)beCameraCtrlInfo_vtableRead,(int)beCameraCtrlInfo_fieldInit,0,(int)lbl_804D2A10);
}
void *beCameraCtrlInfo_getMetaCall(){return beCameraCtrlInfo_getMeta();}
}
#pragma pop
