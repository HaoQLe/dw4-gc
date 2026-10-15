#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beNDMWSaveIntf_fieldInit();
void *beNDMWSaveIntf_getMeta();
void beNDMWSaveIntf_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_803250AC();
extern char beNDMWSaveIntf_className[];
extern char beNDMWSaveIntf_dependencies[];
extern char beNDMWSaveIntf_meta[];
void beNDMWSaveIntf_register();
void *beNDMWSaveIntf_getMetaCall();
}
extern "C" {
void beNDMWSaveIntf_arkRegister(){
 meta_registerNow((int)beNDMWSaveIntf_register);
}
void beNDMWSaveIntf_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWSaveIntf_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beNDMWSaveIntf_getMetaCall,(int)beNDMWSaveIntf_className,44,(int)beNDMWSaveIntf_vtableRead,(int)beNDMWSaveIntf_fieldInit,0,(int)beNDMWSaveIntf_dependencies);
}
void *beNDMWSaveIntf_getMetaCall(){return beNDMWSaveIntf_getMeta();}
}
#pragma pop
