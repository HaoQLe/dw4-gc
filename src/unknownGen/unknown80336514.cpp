#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beNDMWSaveCtrl_fieldInit();
void *beNDMWSaveCtrl_getMeta();
void beNDMWSaveCtrl_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_803250AC();
extern char lbl_8045407C[];
extern char lbl_804E23C4[];
extern char lbl_80536090[];
void beNDMWSaveCtrl_register();
void *beNDMWSaveCtrl_getMetaCall();
}
extern "C" {
void fn_80336514(){
 fn_80066188((int)beNDMWSaveCtrl_register);
}
void beNDMWSaveCtrl_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536090,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beNDMWSaveCtrl_getMetaCall,(int)lbl_8045407C,36,(int)beNDMWSaveCtrl_vtableRead,(int)beNDMWSaveCtrl_fieldInit,0,(int)lbl_804E23C4);
}
void *beNDMWSaveCtrl_getMetaCall(){return beNDMWSaveCtrl_getMeta();}
}
#pragma pop
