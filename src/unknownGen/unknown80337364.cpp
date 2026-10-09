#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWPanelObjectStat_fieldInit();
void *beNDMWPanelObjectStat_getMeta();
void beNDMWPanelObjectStat_vtableRead();
void beNDMWPanelObject_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80337428();
extern char lbl_80454160[];
extern char lbl_804E24C0[];
extern char lbl_805360D4[];
void beNDMWPanelObjectStat_register();
void *beNDMWPanelObjectStat_getMetaCall();
}
extern "C" {
void fn_80337364(){
 fn_80066188((int)beNDMWPanelObjectStat_register);
}
void beNDMWPanelObjectStat_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805360D4,(int)beNDMWPanelObject_register,(int)fn_80337428,(int)beNDMWPanelObjectStat_getMetaCall,(int)lbl_80454160,72,(int)beNDMWPanelObjectStat_vtableRead,(int)beNDMWPanelObjectStat_fieldInit,0,(int)lbl_804E24C0);
}
void *beNDMWPanelObjectStat_getMetaCall(){return beNDMWPanelObjectStat_getMeta();}
}
#pragma pop
