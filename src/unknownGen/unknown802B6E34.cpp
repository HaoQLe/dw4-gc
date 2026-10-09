#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beTextureCtrlWork_fieldInit();
void *beTextureCtrlWork_getMeta();
void beTextureCtrlWork_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041D3D0[];
extern char lbl_804CF210[];
extern char lbl_8053468C[];
void beTextureCtrlWork_register();
void *beTextureCtrlWork_getMetaCall();
}
extern "C" {
void fn_802B6E34(){
 fn_80066188((int)beTextureCtrlWork_register);
}
void beTextureCtrlWork_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053468C,(int)igObject_register,(int)fn_800237D0,(int)beTextureCtrlWork_getMetaCall,(int)lbl_8041D3D0,16,(int)beTextureCtrlWork_vtableRead,(int)beTextureCtrlWork_fieldInit,0,(int)lbl_804CF210);
}
void *beTextureCtrlWork_getMetaCall(){return beTextureCtrlWork_getMeta();}
}
#pragma pop
