#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beModelCtrlInfoDataAIH_fieldInit();
void *beModelCtrlInfoDataAIH_getMeta();
void beModelCtrlInfoDataAIH_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_8041F090[];
extern char lbl_80534E38[];
void beModelCtrlInfoDataAIH_register();
void *beModelCtrlInfoDataAIH_getMetaCall();
}
extern "C" {
void fn_802C9C40(){
 fn_80066188((int)beModelCtrlInfoDataAIH_register);
}
void beModelCtrlInfoDataAIH_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534E38,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beModelCtrlInfoDataAIH_getMetaCall,(int)lbl_8041F090,44,(int)beModelCtrlInfoDataAIH_vtableRead,(int)beModelCtrlInfoDataAIH_fieldInit,0,0);
}
void *beModelCtrlInfoDataAIH_getMetaCall(){return beModelCtrlInfoDataAIH_getMeta();}
}
#pragma pop
