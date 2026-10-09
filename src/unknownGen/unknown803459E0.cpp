#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWAfsSetup_fieldInit();
void *beNDMWAfsSetup_getMeta();
void beNDMWAfsSetup_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_803250AC();
void igInfoManager_register();
extern char lbl_804556EC[];
extern char lbl_804E41C8[];
extern char lbl_8053684C[];
void beNDMWAfsSetup_register();
void *beNDMWAfsSetup_getMetaCall();
}
extern "C" {
void fn_803459E0(){
 fn_80066188((int)beNDMWAfsSetup_register);
}
void beNDMWAfsSetup_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_8053684C,(int)igInfoManager_register,(int)fn_80284550,(int)beNDMWAfsSetup_getMetaCall,(int)lbl_804556EC,40,(int)beNDMWAfsSetup_vtableRead,(int)beNDMWAfsSetup_fieldInit,0,(int)lbl_804E41C8);
}
void *beNDMWAfsSetup_getMetaCall(){return beNDMWAfsSetup_getMeta();}
}
#pragma pop
