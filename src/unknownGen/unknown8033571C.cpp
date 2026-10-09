#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWSaveIntfCtrlData_fieldInit();
void *beNDMWSaveIntfCtrlData_getMeta();
void beNDMWSaveIntfCtrlData_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_80453F24[];
extern char lbl_8053600C[];
void beNDMWSaveIntfCtrlData_register();
void *beNDMWSaveIntfCtrlData_getMetaCall();
}
extern "C" {
void fn_8033571C(){
 fn_80066188((int)beNDMWSaveIntfCtrlData_register);
}
void beNDMWSaveIntfCtrlData_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_8053600C,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWSaveIntfCtrlData_getMetaCall,(int)lbl_80453F24,52,(int)beNDMWSaveIntfCtrlData_vtableRead,(int)beNDMWSaveIntfCtrlData_fieldInit,0,0);
}
void *beNDMWSaveIntfCtrlData_getMetaCall(){return beNDMWSaveIntfCtrlData_getMeta();}
}
#pragma pop
