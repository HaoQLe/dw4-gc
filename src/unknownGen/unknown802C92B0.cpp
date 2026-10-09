#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beModelCtrlInfoDataTrc_fieldInit();
void *beModelCtrlInfoDataTrc_getMeta();
void beModelCtrlInfoDataTrc_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_8041EFDC[];
extern char lbl_804D0D2C[];
extern char lbl_80534E08[];
void beModelCtrlInfoDataTrc_register();
void *beModelCtrlInfoDataTrc_getMetaCall();
}
extern "C" {
void fn_802C92B0(){
 fn_80066188((int)beModelCtrlInfoDataTrc_register);
}
void beModelCtrlInfoDataTrc_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534E08,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beModelCtrlInfoDataTrc_getMetaCall,(int)lbl_8041EFDC,20,(int)beModelCtrlInfoDataTrc_vtableRead,(int)beModelCtrlInfoDataTrc_fieldInit,0,(int)lbl_804D0D2C);
}
void *beModelCtrlInfoDataTrc_getMetaCall(){return beModelCtrlInfoDataTrc_getMeta();}
}
#pragma pop
