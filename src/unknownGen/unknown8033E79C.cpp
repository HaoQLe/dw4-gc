#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beNDMWLoadIntf2_fieldInit();
void *beNDMWLoadIntf2_getMeta();
void beNDMWLoadIntf2_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_803250AC();
extern char beNDMWLoadIntf2_className[];
extern char lbl_804E3554[];
extern char beNDMWLoadIntf2_meta[];
void beNDMWLoadIntf2_register();
void *beNDMWLoadIntf2_getMetaCall();
}
extern "C" {
void beNDMWLoadIntf2_registerNow(){
 meta_registerNow((int)beNDMWLoadIntf2_register);
}
void beNDMWLoadIntf2_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadIntf2_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beNDMWLoadIntf2_getMetaCall,(int)beNDMWLoadIntf2_className,48,(int)beNDMWLoadIntf2_vtableRead,(int)beNDMWLoadIntf2_fieldInit,0,(int)lbl_804E3554);
}
void *beNDMWLoadIntf2_getMetaCall(){return beNDMWLoadIntf2_getMeta();}
}
#pragma pop
