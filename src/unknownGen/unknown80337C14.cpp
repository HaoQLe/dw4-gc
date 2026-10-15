#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWPanelObjectWaza_fieldInit();
void *beNDMWPanelObjectWaza_getMeta();
void beNDMWPanelObjectWaza_vtableRead();
void beNDMWPanelObject_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80337428();
extern char beNDMWPanelObjectWaza_className[];
extern char lbl_804E252C[];
extern char beNDMWPanelObjectWaza_meta[];
void beNDMWPanelObjectWaza_register();
void *beNDMWPanelObjectWaza_getMetaCall();
}
extern "C" {
void beNDMWPanelObjectWaza_registerNow(){
 meta_registerNow((int)beNDMWPanelObjectWaza_register);
}
void beNDMWPanelObjectWaza_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWPanelObjectWaza_meta,(int)beNDMWPanelObject_register,(int)fn_80337428,(int)beNDMWPanelObjectWaza_getMetaCall,(int)beNDMWPanelObjectWaza_className,68,(int)beNDMWPanelObjectWaza_vtableRead,(int)beNDMWPanelObjectWaza_fieldInit,0,(int)lbl_804E252C);
}
void *beNDMWPanelObjectWaza_getMetaCall(){return beNDMWPanelObjectWaza_getMeta();}
}
#pragma pop
