#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSelectCtrlInfoWork_fieldInit();
void *beSelectCtrlInfoWork_getMeta();
void beSelectCtrlInfoWork_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041D948[];
extern char lbl_804CF710[];
extern char lbl_805347D0[];
void beSelectCtrlInfoWork_register();
void *beSelectCtrlInfoWork_getMetaCall();
}
extern "C" {
void fn_802BA76C(){
 fn_80066188((int)beSelectCtrlInfoWork_register);
}
void beSelectCtrlInfoWork_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805347D0,(int)igObject_register,(int)fn_800237D0,(int)beSelectCtrlInfoWork_getMetaCall,(int)lbl_8041D948,36,(int)beSelectCtrlInfoWork_vtableRead,(int)beSelectCtrlInfoWork_fieldInit,0,(int)lbl_804CF710);
}
void *beSelectCtrlInfoWork_getMetaCall(){return beSelectCtrlInfoWork_getMeta();}
}
#pragma pop
