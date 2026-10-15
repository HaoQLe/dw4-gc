#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beNDMWLogo_fieldInit();
void *beNDMWLogo_getMeta();
void beNDMWLogo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_803250AC();
extern char beNDMWLogo_className[];
extern char lbl_804E2B0C[];
extern char beNDMWLogo_meta[];
void beNDMWLogo_register();
void *beNDMWLogo_getMetaCall();
}
extern "C" {
void beNDMWLogo_registerNow(){
 meta_registerNow((int)beNDMWLogo_register);
}
void beNDMWLogo_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLogo_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beNDMWLogo_getMetaCall,(int)beNDMWLogo_className,92,(int)beNDMWLogo_vtableRead,(int)beNDMWLogo_fieldInit,0,(int)lbl_804E2B0C);
}
void *beNDMWLogo_getMetaCall(){return beNDMWLogo_getMeta();}
}
#pragma pop
