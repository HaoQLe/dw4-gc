#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beMatCtrl_fieldInit();
void *beMatCtrl_getMeta();
void beMatCtrl_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char lbl_8041FA10[];
extern char lbl_804D177C[];
extern char lbl_805350D0[];
void beMatCtrl_register();
void *beMatCtrl_getMetaCall();
}
extern "C" {
void fn_802D13FC(){
 fn_80066188((int)beMatCtrl_register);
}
void beMatCtrl_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805350D0,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beMatCtrl_getMetaCall,(int)lbl_8041FA10,68,(int)beMatCtrl_vtableRead,(int)beMatCtrl_fieldInit,0,(int)lbl_804D177C);
}
void *beMatCtrl_getMetaCall(){return beMatCtrl_getMeta();}
}
#pragma pop
