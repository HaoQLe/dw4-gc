#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beNDMWLogo_fieldInit();
void *beNDMWLogo_getMeta();
void beNDMWLogo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_803250AC();
extern char lbl_804547B4[];
extern char lbl_804E2B0C[];
extern char lbl_80536258[];
void beNDMWLogo_register();
void *beNDMWLogo_getMetaCall();
}
extern "C" {
void fn_8033BFDC(){
 fn_80066188((int)beNDMWLogo_register);
}
void beNDMWLogo_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536258,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beNDMWLogo_getMetaCall,(int)lbl_804547B4,92,(int)beNDMWLogo_vtableRead,(int)beNDMWLogo_fieldInit,0,(int)lbl_804E2B0C);
}
void *beNDMWLogo_getMetaCall(){return beNDMWLogo_getMeta();}
}
#pragma pop
