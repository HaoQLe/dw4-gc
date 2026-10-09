#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadIntf2NameSel_fieldInit();
void *beNDMWLoadIntf2NameSel_getMeta();
void beNDMWLoadIntf2NameSel_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_80454824[];
extern char lbl_804E2BCC[];
extern char lbl_8053628C[];
void beNDMWLoadIntf2NameSel_register();
void *beNDMWLoadIntf2NameSel_getMetaCall();
}
extern "C" {
void fn_8033C534(){
 fn_80066188((int)beNDMWLoadIntf2NameSel_register);
}
void beNDMWLoadIntf2NameSel_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_8053628C,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadIntf2NameSel_getMetaCall,(int)lbl_80454824,288,(int)beNDMWLoadIntf2NameSel_vtableRead,(int)beNDMWLoadIntf2NameSel_fieldInit,0,(int)lbl_804E2BCC);
}
void *beNDMWLoadIntf2NameSel_getMetaCall(){return beNDMWLoadIntf2NameSel_getMeta();}
}
#pragma pop
