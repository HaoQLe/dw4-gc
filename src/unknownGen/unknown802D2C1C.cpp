#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beLightCtrlInfo_fieldInit();
void *beLightCtrlInfo_getMeta();
void beLightCtrlInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_8041FB38[];
extern char lbl_804D18E4[];
extern char lbl_8053513C[];
void beLightCtrlInfo_register();
void *beLightCtrlInfo_getMetaCall();
}
extern "C" {
void fn_802D2C1C(){
 fn_80066188((int)beLightCtrlInfo_register);
}
void beLightCtrlInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053513C,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beLightCtrlInfo_getMetaCall,(int)lbl_8041FB38,32,(int)beLightCtrlInfo_vtableRead,(int)beLightCtrlInfo_fieldInit,0,(int)lbl_804D18E4);
}
void *beLightCtrlInfo_getMetaCall(){return beLightCtrlInfo_getMeta();}
}
#pragma pop
