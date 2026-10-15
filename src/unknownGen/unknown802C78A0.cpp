#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlInfoRideOn2_fieldInit();
void *beModelCtrlInfoRideOn2_getMeta();
void beModelCtrlInfoRideOn2_vtableRead();
void beModelCtrlInfoRideOn_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802C72BC();
extern char beModelCtrlInfoRideOn2_className[];
extern char beModelCtrlInfoRideOn2_meta[];
void beModelCtrlInfoRideOn2_register();
void *beModelCtrlInfoRideOn2_getMetaCall();
}
extern "C" {
void beModelCtrlInfoRideOn2_registerNow(){
 meta_registerNow((int)beModelCtrlInfoRideOn2_register);
}
void beModelCtrlInfoRideOn2_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlInfoRideOn2_meta,(int)beModelCtrlInfoRideOn_register,(int)fn_802C72BC,(int)beModelCtrlInfoRideOn2_getMetaCall,(int)beModelCtrlInfoRideOn2_className,96,(int)beModelCtrlInfoRideOn2_vtableRead,(int)beModelCtrlInfoRideOn2_fieldInit,0,0);
}
void *beModelCtrlInfoRideOn2_getMetaCall(){return beModelCtrlInfoRideOn2_getMeta();}
}
#pragma pop
