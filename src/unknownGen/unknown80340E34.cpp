#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadIntf2MesWin_fieldInit();
void *beNDMWLoadIntf2MesWin_getMeta();
void beNDMWLoadIntf2MesWin_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_80454F8C[];
extern char lbl_804E3A78[];
extern char lbl_8053666C[];
void beNDMWLoadIntf2MesWin_register();
void *beNDMWLoadIntf2MesWin_getMetaCall();
}
extern "C" {
void fn_80340E34(){
 fn_80066188((int)beNDMWLoadIntf2MesWin_register);
}
void beNDMWLoadIntf2MesWin_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_8053666C,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadIntf2MesWin_getMetaCall,(int)lbl_80454F8C,64,(int)beNDMWLoadIntf2MesWin_vtableRead,(int)beNDMWLoadIntf2MesWin_fieldInit,0,(int)lbl_804E3A78);
}
void *beNDMWLoadIntf2MesWin_getMetaCall(){return beNDMWLoadIntf2MesWin_getMeta();}
}
#pragma pop
