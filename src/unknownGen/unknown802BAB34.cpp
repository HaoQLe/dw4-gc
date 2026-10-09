#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beSelectCtrl_fieldInit();
void *beSelectCtrl_getMeta();
void beSelectCtrl_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char lbl_8041D9D0[];
extern char lbl_804CF7A0[];
extern char lbl_805347EC[];
void beSelectCtrl_register();
void *beSelectCtrl_getMetaCall();
}
extern "C" {
void fn_802BAB34(){
 fn_80066188((int)beSelectCtrl_register);
}
void beSelectCtrl_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805347EC,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beSelectCtrl_getMetaCall,(int)lbl_8041D9D0,40,(int)beSelectCtrl_vtableRead,(int)beSelectCtrl_fieldInit,0,(int)lbl_804CF7A0);
}
void *beSelectCtrl_getMetaCall(){return beSelectCtrl_getMeta();}
}
#pragma pop
