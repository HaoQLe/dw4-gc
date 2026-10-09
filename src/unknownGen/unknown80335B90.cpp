#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beNDMWSaveIntf_fieldInit();
void *beNDMWSaveIntf_getMeta();
void beNDMWSaveIntf_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_803250AC();
extern char lbl_80453FE8[];
extern char lbl_804E22F8[];
extern char lbl_80536054[];
void beNDMWSaveIntf_register();
void *beNDMWSaveIntf_getMetaCall();
}
extern "C" {
void fn_80335B90(){
 fn_80066188((int)beNDMWSaveIntf_register);
}
void beNDMWSaveIntf_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536054,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beNDMWSaveIntf_getMetaCall,(int)lbl_80453FE8,44,(int)beNDMWSaveIntf_vtableRead,(int)beNDMWSaveIntf_fieldInit,0,(int)lbl_804E22F8);
}
void *beNDMWSaveIntf_getMetaCall(){return beNDMWSaveIntf_getMeta();}
}
#pragma pop
