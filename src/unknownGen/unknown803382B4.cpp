#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beNDMWPanelWaza_fieldInit();
void *beNDMWPanelWaza_getMeta();
void beNDMWPanelWaza_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_803250AC();
extern char beNDMWPanelWaza_className[];
extern char lbl_804E26C8[];
extern char beNDMWPanelWaza_meta[];
void beNDMWPanelWaza_register();
void *beNDMWPanelWaza_getMetaCall();
}
extern "C" {
void beNDMWPanelWaza_registerNow(){
 meta_registerNow((int)beNDMWPanelWaza_register);
}
void beNDMWPanelWaza_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWPanelWaza_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beNDMWPanelWaza_getMetaCall,(int)beNDMWPanelWaza_className,36,(int)beNDMWPanelWaza_vtableRead,(int)beNDMWPanelWaza_fieldInit,0,(int)lbl_804E26C8);
}
void *beNDMWPanelWaza_getMetaCall(){return beNDMWPanelWaza_getMeta();}
}
#pragma pop
