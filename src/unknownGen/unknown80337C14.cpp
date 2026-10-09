#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWPanelObjectWaza_fieldInit();
void *beNDMWPanelObjectWaza_getMeta();
void beNDMWPanelObjectWaza_vtableRead();
void beNDMWPanelObject_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80337428();
extern char lbl_804541A8[];
extern char lbl_804E252C[];
extern char lbl_805360F8[];
void beNDMWPanelObjectWaza_register();
void *beNDMWPanelObjectWaza_getMetaCall();
}
extern "C" {
void fn_80337C14(){
 fn_80066188((int)beNDMWPanelObjectWaza_register);
}
void beNDMWPanelObjectWaza_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805360F8,(int)beNDMWPanelObject_register,(int)fn_80337428,(int)beNDMWPanelObjectWaza_getMetaCall,(int)lbl_804541A8,68,(int)beNDMWPanelObjectWaza_vtableRead,(int)beNDMWPanelObjectWaza_fieldInit,0,(int)lbl_804E252C);
}
void *beNDMWPanelObjectWaza_getMetaCall(){return beNDMWPanelObjectWaza_getMeta();}
}
#pragma pop
