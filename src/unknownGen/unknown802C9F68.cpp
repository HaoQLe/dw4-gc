#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beModelCtrlInfoDataAIM_fieldInit();
void *beModelCtrlInfoDataAIM_getMeta();
void beModelCtrlInfoDataAIM_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_8041F110[];
extern char lbl_804D0E24[];
extern char lbl_80534E60[];
void beModelCtrlInfoDataAIM_register();
void *beModelCtrlInfoDataAIM_getMetaCall();
}
extern "C" {
void fn_802C9F68(){
 fn_80066188((int)beModelCtrlInfoDataAIM_register);
}
void beModelCtrlInfoDataAIM_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534E60,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beModelCtrlInfoDataAIM_getMetaCall,(int)lbl_8041F110,20,(int)beModelCtrlInfoDataAIM_vtableRead,(int)beModelCtrlInfoDataAIM_fieldInit,0,(int)lbl_804D0E24);
}
void *beModelCtrlInfoDataAIM_getMetaCall(){return beModelCtrlInfoDataAIM_getMeta();}
}
#pragma pop
