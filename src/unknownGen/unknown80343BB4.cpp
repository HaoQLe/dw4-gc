#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWShinkaCtrl_fieldInit();
void *beNDMWShinkaCtrl_getMeta();
void beNDMWShinkaCtrl_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void igObject_register();
extern char beNDMWShinkaCtrl_className[];
extern char lbl_804E3D88[];
extern char beNDMWShinkaCtrl_meta[];
void beNDMWShinkaCtrl_register();
void *beNDMWShinkaCtrl_getMetaCall();
}
extern "C" {
void beNDMWShinkaCtrl_registerNow(){
 meta_registerNow((int)beNDMWShinkaCtrl_register);
}
void beNDMWShinkaCtrl_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShinkaCtrl_meta,(int)igObject_register,(int)fn_800237D0,(int)beNDMWShinkaCtrl_getMetaCall,(int)beNDMWShinkaCtrl_className,32,(int)beNDMWShinkaCtrl_vtableRead,(int)beNDMWShinkaCtrl_fieldInit,0,(int)lbl_804E3D88);
}
void *beNDMWShinkaCtrl_getMetaCall(){return beNDMWShinkaCtrl_getMeta();}
}
#pragma pop
