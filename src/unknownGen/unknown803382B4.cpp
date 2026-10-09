#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beNDMWPanelWaza_fieldInit();
void *beNDMWPanelWaza_getMeta();
void beNDMWPanelWaza_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_803250AC();
extern char lbl_804542C8[];
extern char lbl_804E26C8[];
extern char lbl_80536150[];
void beNDMWPanelWaza_register();
void *beNDMWPanelWaza_getMetaCall();
}
extern "C" {
void fn_803382B4(){
 fn_80066188((int)beNDMWPanelWaza_register);
}
void beNDMWPanelWaza_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536150,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beNDMWPanelWaza_getMetaCall,(int)lbl_804542C8,36,(int)beNDMWPanelWaza_vtableRead,(int)beNDMWPanelWaza_fieldInit,0,(int)lbl_804E26C8);
}
void *beNDMWPanelWaza_getMetaCall(){return beNDMWPanelWaza_getMeta();}
}
#pragma pop
