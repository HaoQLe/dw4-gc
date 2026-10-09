#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beTextureCtrl_fieldInit();
void *beTextureCtrl_getMeta();
void beTextureCtrl_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char lbl_8041D3A8[];
extern char lbl_804CF1E8[];
extern char lbl_80534680[];
void beTextureCtrl_register();
void *beTextureCtrl_getMetaCall();
}
extern "C" {
void fn_802B6B20(){
 fn_80066188((int)beTextureCtrl_register);
}
void beTextureCtrl_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534680,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beTextureCtrl_getMetaCall,(int)lbl_8041D3A8,40,(int)beTextureCtrl_vtableRead,(int)beTextureCtrl_fieldInit,0,(int)lbl_804CF1E8);
}
void *beTextureCtrl_getMetaCall(){return beTextureCtrl_getMeta();}
}
#pragma pop
