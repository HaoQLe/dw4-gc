#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beTextureCtrlInfo_fieldInit();
void *beTextureCtrlInfo_getMeta();
void beTextureCtrlInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_8041D34C[];
extern char lbl_804CF190[];
extern char lbl_80534664[];
void beTextureCtrlInfo_register();
void *beTextureCtrlInfo_getMetaCall();
}
extern "C" {
void fn_802B6254(){
 fn_80066188((int)beTextureCtrlInfo_register);
}
void beTextureCtrlInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534664,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beTextureCtrlInfo_getMetaCall,(int)lbl_8041D34C,36,(int)beTextureCtrlInfo_vtableRead,(int)beTextureCtrlInfo_fieldInit,0,(int)lbl_804CF190);
}
void *beTextureCtrlInfo_getMetaCall(){return beTextureCtrlInfo_getMeta();}
}
#pragma pop
