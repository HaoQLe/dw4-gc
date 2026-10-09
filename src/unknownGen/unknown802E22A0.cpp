#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beCameraCtrlInfoRamShake_fieldInit();
void *beCameraCtrlInfoRamShake_getMeta();
void beCameraCtrlInfoRamShake_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_80420B50[];
extern char lbl_80535634[];
void beCameraCtrlInfoRamShake_register();
void *beCameraCtrlInfoRamShake_getMetaCall();
}
extern "C" {
void fn_802E22A0(){
 fn_80066188((int)beCameraCtrlInfoRamShake_register);
}
void beCameraCtrlInfoRamShake_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535634,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beCameraCtrlInfoRamShake_getMetaCall,(int)lbl_80420B50,64,(int)beCameraCtrlInfoRamShake_vtableRead,(int)beCameraCtrlInfoRamShake_fieldInit,0,0);
}
void *beCameraCtrlInfoRamShake_getMetaCall(){return beCameraCtrlInfoRamShake_getMeta();}
}
#pragma pop
