#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beNDMWStatus_fieldInit();
void *beNDMWStatus_getMeta();
void beNDMWStatus_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_803250AC();
extern char lbl_80453DD0[];
extern char lbl_804E20EC[];
extern char lbl_80535FB8[];
void beNDMWStatus_register();
void *beNDMWStatus_getMetaCall();
}
extern "C" {
void fn_803342BC(){
 fn_80066188((int)beNDMWStatus_register);
}
void beNDMWStatus_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535FB8,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beNDMWStatus_getMetaCall,(int)lbl_80453DD0,44,(int)beNDMWStatus_vtableRead,(int)beNDMWStatus_fieldInit,0,(int)lbl_804E20EC);
}
void *beNDMWStatus_getMetaCall(){return beNDMWStatus_getMeta();}
}
#pragma pop
