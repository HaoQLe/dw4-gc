#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlNode2_fieldInit();
void *beModelCtrlNode2_getMeta();
void beModelCtrlNode2_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_801BC078();
void fn_802B1AC8();
void *fn_802C6320();
void igTransform_register();
extern char lbl_8041EA78[];
extern char lbl_804D06E8[];
extern char lbl_80534C50[];
void beModelCtrlNode2_register();
void *beModelCtrlNode2_getMetaCall();
}
extern "C" {
void fn_802C6198(){
 fn_80066188((int)beModelCtrlNode2_register);
}
void beModelCtrlNode2_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534C50,(int)igTransform_register,(int)fn_801BC078,(int)beModelCtrlNode2_getMetaCall,(int)lbl_8041EA78,144,(int)beModelCtrlNode2_vtableRead,(int)beModelCtrlNode2_fieldInit,(int)fn_802C6320,(int)lbl_804D06E8);
}
void *beModelCtrlNode2_getMetaCall(){return beModelCtrlNode2_getMeta();}
}
#pragma pop
