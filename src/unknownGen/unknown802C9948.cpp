#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beModelCtrlInfoDataHit_fieldInit();
void *beModelCtrlInfoDataHit_getMeta();
void beModelCtrlInfoDataHit_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_8041F024[];
extern char lbl_804D0D5C[];
extern char lbl_80534E20[];
void beModelCtrlInfoDataHit_register();
void *beModelCtrlInfoDataHit_getMetaCall();
}
extern "C" {
void fn_802C9948(){
 fn_80066188((int)beModelCtrlInfoDataHit_register);
}
void beModelCtrlInfoDataHit_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534E20,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beModelCtrlInfoDataHit_getMetaCall,(int)lbl_8041F024,28,(int)beModelCtrlInfoDataHit_vtableRead,(int)beModelCtrlInfoDataHit_fieldInit,0,(int)lbl_804D0D5C);
}
void *beModelCtrlInfoDataHit_getMetaCall(){return beModelCtrlInfoDataHit_getMeta();}
}
#pragma pop
