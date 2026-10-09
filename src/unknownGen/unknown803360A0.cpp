#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWSaveCtrlCtrlData_fieldInit();
void *beNDMWSaveCtrlCtrlData_getMeta();
void beNDMWSaveCtrlCtrlData_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_80454020[];
extern char lbl_80536068[];
void beNDMWSaveCtrlCtrlData_register();
void *beNDMWSaveCtrlCtrlData_getMetaCall();
}
extern "C" {
void fn_803360A0(){
 fn_80066188((int)beNDMWSaveCtrlCtrlData_register);
}
void beNDMWSaveCtrlCtrlData_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536068,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWSaveCtrlCtrlData_getMetaCall,(int)lbl_80454020,44,(int)beNDMWSaveCtrlCtrlData_vtableRead,(int)beNDMWSaveCtrlCtrlData_fieldInit,0,0);
}
void *beNDMWSaveCtrlCtrlData_getMetaCall(){return beNDMWSaveCtrlCtrlData_getMeta();}
}
#pragma pop
