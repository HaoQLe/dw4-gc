#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlInfoRideOn_fieldInit();
void *beModelCtrlInfoRideOn_getMeta();
void beModelCtrlInfoRideOn_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041EE34[];
extern char lbl_804D0B3C[];
extern char lbl_80534D74[];
void beModelCtrlInfoRideOn_register();
void *beModelCtrlInfoRideOn_getMetaCall();
}
extern "C" {
void fn_802C7C30(){
 fn_80066188((int)beModelCtrlInfoRideOn_register);
}
void beModelCtrlInfoRideOn_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534D74,(int)igObject_register,(int)fn_800237D0,(int)beModelCtrlInfoRideOn_getMetaCall,(int)lbl_8041EE34,84,(int)beModelCtrlInfoRideOn_vtableRead,(int)beModelCtrlInfoRideOn_fieldInit,0,(int)lbl_804D0B3C);
}
void *beModelCtrlInfoRideOn_getMetaCall(){return beModelCtrlInfoRideOn_getMeta();}
}
#pragma pop
