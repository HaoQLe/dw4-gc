#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beNDMWLoadCtrl2_fieldInit();
void *beNDMWLoadCtrl2_getMeta();
void beNDMWLoadCtrl2_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_803250AC();
extern char lbl_804550E0[];
extern char lbl_804E3CC8[];
extern char lbl_80536718[];
void beNDMWLoadCtrl2_register();
void *beNDMWLoadCtrl2_getMetaCall();
}
extern "C" {
void fn_803422BC(){
 fn_80066188((int)beNDMWLoadCtrl2_register);
}
void beNDMWLoadCtrl2_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536718,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beNDMWLoadCtrl2_getMetaCall,(int)lbl_804550E0,44,(int)beNDMWLoadCtrl2_vtableRead,(int)beNDMWLoadCtrl2_fieldInit,0,(int)lbl_804E3CC8);
}
void *beNDMWLoadCtrl2_getMetaCall(){return beNDMWLoadCtrl2_getMeta();}
}
#pragma pop
