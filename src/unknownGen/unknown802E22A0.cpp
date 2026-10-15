#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beCameraCtrlInfoRamShake_fieldInit();
void *beCameraCtrlInfoRamShake_getMeta();
void beCameraCtrlInfoRamShake_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char beCameraCtrlInfoRamShake_className[];
extern char beCameraCtrlInfoRamShake_meta[];
void beCameraCtrlInfoRamShake_register();
void *beCameraCtrlInfoRamShake_getMetaCall();
}
extern "C" {
void beCameraCtrlInfoRamShake_arkRegister(){
 meta_registerNow((int)beCameraCtrlInfoRamShake_register);
}
void beCameraCtrlInfoRamShake_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beCameraCtrlInfoRamShake_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beCameraCtrlInfoRamShake_getMetaCall,(int)beCameraCtrlInfoRamShake_className,64,(int)beCameraCtrlInfoRamShake_vtableRead,(int)beCameraCtrlInfoRamShake_fieldInit,0,0);
}
void *beCameraCtrlInfoRamShake_getMetaCall(){return beCameraCtrlInfoRamShake_getMeta();}
}
#pragma pop
