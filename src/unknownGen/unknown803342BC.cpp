#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beNDMWStatus_fieldInit();
void *beNDMWStatus_getMeta();
void beNDMWStatus_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_803250AC();
extern char beNDMWStatus_className[];
extern char beNDMWStatus_dependencies[];
extern char beNDMWStatus_meta[];
void beNDMWStatus_register();
void *beNDMWStatus_getMetaCall();
}
extern "C" {
void beNDMWStatus_arkRegister(){
 meta_registerNow((int)beNDMWStatus_register);
}
void beNDMWStatus_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWStatus_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beNDMWStatus_getMetaCall,(int)beNDMWStatus_className,44,(int)beNDMWStatus_vtableRead,(int)beNDMWStatus_fieldInit,0,(int)beNDMWStatus_dependencies);
}
void *beNDMWStatus_getMetaCall(){return beNDMWStatus_getMeta();}
}
#pragma pop
