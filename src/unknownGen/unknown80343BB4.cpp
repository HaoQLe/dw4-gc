#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWShinkaCtrl_fieldInit();
void *beNDMWShinkaCtrl_getMeta();
void beNDMWShinkaCtrl_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void igObject_register();
extern char lbl_80455244[];
extern char lbl_804E3D88[];
extern char lbl_80536778[];
void beNDMWShinkaCtrl_register();
void *beNDMWShinkaCtrl_getMetaCall();
}
extern "C" {
void fn_80343BB4(){
 fn_80066188((int)beNDMWShinkaCtrl_register);
}
void beNDMWShinkaCtrl_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536778,(int)igObject_register,(int)fn_800237D0,(int)beNDMWShinkaCtrl_getMetaCall,(int)lbl_80455244,32,(int)beNDMWShinkaCtrl_vtableRead,(int)beNDMWShinkaCtrl_fieldInit,0,(int)lbl_804E3D88);
}
void *beNDMWShinkaCtrl_getMetaCall(){return beNDMWShinkaCtrl_getMeta();}
}
#pragma pop
