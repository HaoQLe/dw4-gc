#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beCameraCtrlInfo_fieldInit();
void *beCameraCtrlInfo_getMeta();
void beCameraCtrlInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_80420AD4[];
extern char lbl_804D2A10[];
extern char lbl_80535604[];
void beCameraCtrlInfo_register();
void *beCameraCtrlInfo_getMetaCall();
}
extern "C" {
void fn_802E19D8(){
 fn_80066188((int)beCameraCtrlInfo_register);
}
void beCameraCtrlInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535604,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beCameraCtrlInfo_getMetaCall,(int)lbl_80420AD4,32,(int)beCameraCtrlInfo_vtableRead,(int)beCameraCtrlInfo_fieldInit,0,(int)lbl_804D2A10);
}
void *beCameraCtrlInfo_getMetaCall(){return beCameraCtrlInfo_getMeta();}
}
#pragma pop
