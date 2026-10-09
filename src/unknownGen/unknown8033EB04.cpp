#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beNDMWLoadCtrl2Info_fieldInit();
void *beNDMWLoadCtrl2Info_getMeta();
void beNDMWLoadCtrl2Info_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_803250AC();
extern char lbl_80454C18[];
extern char lbl_804E35A0[];
extern char lbl_80536518[];
void beNDMWLoadCtrl2Info_register();
void *beNDMWLoadCtrl2Info_getMetaCall();
}
extern "C" {
void fn_8033EB04(){
 fn_80066188((int)beNDMWLoadCtrl2Info_register);
}
void beNDMWLoadCtrl2Info_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536518,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beNDMWLoadCtrl2Info_getMetaCall,(int)lbl_80454C18,32,(int)beNDMWLoadCtrl2Info_vtableRead,(int)beNDMWLoadCtrl2Info_fieldInit,0,(int)lbl_804E35A0);
}
void *beNDMWLoadCtrl2Info_getMetaCall(){return beNDMWLoadCtrl2Info_getMeta();}
}
#pragma pop
