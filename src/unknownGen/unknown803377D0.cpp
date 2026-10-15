#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWPanelObjectItem_fieldInit();
void *beNDMWPanelObjectItem_getMeta();
void beNDMWPanelObjectItem_vtableRead();
void beNDMWPanelObject_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80337428();
extern char beNDMWPanelObjectItem_className[];
extern char lbl_804E2500[];
extern char beNDMWPanelObjectItem_meta[];
void beNDMWPanelObjectItem_register();
void *beNDMWPanelObjectItem_getMetaCall();
}
extern "C" {
void beNDMWPanelObjectItem_registerNow(){
 meta_registerNow((int)beNDMWPanelObjectItem_register);
}
void beNDMWPanelObjectItem_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWPanelObjectItem_meta,(int)beNDMWPanelObject_register,(int)fn_80337428,(int)beNDMWPanelObjectItem_getMetaCall,(int)beNDMWPanelObjectItem_className,68,(int)beNDMWPanelObjectItem_vtableRead,(int)beNDMWPanelObjectItem_fieldInit,0,(int)lbl_804E2500);
}
void *beNDMWPanelObjectItem_getMetaCall(){return beNDMWPanelObjectItem_getMeta();}
}
#pragma pop
