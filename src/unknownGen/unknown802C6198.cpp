#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlNode2_fieldInit();
void *beModelCtrlNode2_getMeta();
void beModelCtrlNode2_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_801BC078();
void fn_802B1AC8();
void *fn_802C6320();
void igTransform_register();
extern char beModelCtrlNode2_className[];
extern char lbl_804D06E8[];
extern char beModelCtrlNode2_meta[];
void beModelCtrlNode2_register();
void *beModelCtrlNode2_getMetaCall();
}
extern "C" {
void beModelCtrlNode2_registerNow(){
 meta_registerNow((int)beModelCtrlNode2_register);
}
void beModelCtrlNode2_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlNode2_meta,(int)igTransform_register,(int)fn_801BC078,(int)beModelCtrlNode2_getMetaCall,(int)beModelCtrlNode2_className,144,(int)beModelCtrlNode2_vtableRead,(int)beModelCtrlNode2_fieldInit,(int)fn_802C6320,(int)lbl_804D06E8);
}
void *beModelCtrlNode2_getMetaCall(){return beModelCtrlNode2_getMeta();}
}
#pragma pop
