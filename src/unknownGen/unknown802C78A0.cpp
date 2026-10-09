#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlInfoRideOn2_fieldInit();
void *beModelCtrlInfoRideOn2_getMeta();
void beModelCtrlInfoRideOn2_vtableRead();
void beModelCtrlInfoRideOn_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802C72BC();
extern char lbl_8041EE1C[];
extern char lbl_80534D68[];
void beModelCtrlInfoRideOn2_register();
void *beModelCtrlInfoRideOn2_getMetaCall();
}
extern "C" {
void fn_802C78A0(){
 fn_80066188((int)beModelCtrlInfoRideOn2_register);
}
void beModelCtrlInfoRideOn2_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534D68,(int)beModelCtrlInfoRideOn_register,(int)fn_802C72BC,(int)beModelCtrlInfoRideOn2_getMetaCall,(int)lbl_8041EE1C,96,(int)beModelCtrlInfoRideOn2_vtableRead,(int)beModelCtrlInfoRideOn2_fieldInit,0,0);
}
void *beModelCtrlInfoRideOn2_getMetaCall(){return beModelCtrlInfoRideOn2_getMeta();}
}
#pragma pop
