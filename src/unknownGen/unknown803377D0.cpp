#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWPanelObjectItem_fieldInit();
void *beNDMWPanelObjectItem_getMeta();
void beNDMWPanelObjectItem_vtableRead();
void beNDMWPanelObject_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80337428();
extern char lbl_80454190[];
extern char lbl_804E2500[];
extern char lbl_805360E8[];
void beNDMWPanelObjectItem_register();
void *beNDMWPanelObjectItem_getMetaCall();
}
extern "C" {
void fn_803377D0(){
 fn_80066188((int)beNDMWPanelObjectItem_register);
}
void beNDMWPanelObjectItem_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805360E8,(int)beNDMWPanelObject_register,(int)fn_80337428,(int)beNDMWPanelObjectItem_getMetaCall,(int)lbl_80454190,68,(int)beNDMWPanelObjectItem_vtableRead,(int)beNDMWPanelObjectItem_fieldInit,0,(int)lbl_804E2500);
}
void *beNDMWPanelObjectItem_getMetaCall(){return beNDMWPanelObjectItem_getMeta();}
}
#pragma pop
