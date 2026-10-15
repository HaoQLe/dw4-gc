#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beNDMWTitle2_fieldInit();
void *beNDMWTitle2_getMeta();
void beNDMWTitle2_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_803250AC();
extern char beNDMWTitle2_className[];
extern char lbl_804E197C[];
extern char beNDMWTitle2_meta[];
void beNDMWTitle2_register();
void *beNDMWTitle2_getMetaCall();
}
extern "C" {
void beNDMWTitle2_registerNow(){
 meta_registerNow((int)beNDMWTitle2_register);
}
void beNDMWTitle2_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWTitle2_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beNDMWTitle2_getMetaCall,(int)beNDMWTitle2_className,52,(int)beNDMWTitle2_vtableRead,(int)beNDMWTitle2_fieldInit,0,(int)lbl_804E197C);
}
void *beNDMWTitle2_getMetaCall(){return beNDMWTitle2_getMeta();}
}
#pragma pop
