#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlInfoRideOn4_fieldInit();
void *beModelCtrlInfoRideOn4_getMeta();
void beModelCtrlInfoRideOn4_vtableRead();
void beModelCtrlInfoRideOn_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802C72BC();
extern char lbl_8041ED68[];
extern char lbl_80534D30[];
void beModelCtrlInfoRideOn4_register();
void *beModelCtrlInfoRideOn4_getMetaCall();
}
extern "C" {
void fn_802C7200(){
 fn_80066188((int)beModelCtrlInfoRideOn4_register);
}
void beModelCtrlInfoRideOn4_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534D30,(int)beModelCtrlInfoRideOn_register,(int)fn_802C72BC,(int)beModelCtrlInfoRideOn4_getMetaCall,(int)lbl_8041ED68,120,(int)beModelCtrlInfoRideOn4_vtableRead,(int)beModelCtrlInfoRideOn4_fieldInit,0,0);
}
void *beModelCtrlInfoRideOn4_getMetaCall(){return beModelCtrlInfoRideOn4_getMeta();}
}
#pragma pop
