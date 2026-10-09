#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLogoCtrlData_fieldInit();
void *beNDMWLogoCtrlData_getMeta();
void beNDMWLogoCtrlData_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_804547A0[];
extern char lbl_8053623C[];
void beNDMWLogoCtrlData_register();
void *beNDMWLogoCtrlData_getMetaCall();
}
extern "C" {
void fn_8033BB68(){
 fn_80066188((int)beNDMWLogoCtrlData_register);
}
void beNDMWLogoCtrlData_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_8053623C,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLogoCtrlData_getMetaCall,(int)lbl_804547A0,32,(int)beNDMWLogoCtrlData_vtableRead,(int)beNDMWLogoCtrlData_fieldInit,0,0);
}
void *beNDMWLogoCtrlData_getMetaCall(){return beNDMWLogoCtrlData_getMeta();}
}
#pragma pop
