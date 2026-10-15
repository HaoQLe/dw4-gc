#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlInfoRideOn4_fieldInit();
void *beModelCtrlInfoRideOn4_getMeta();
void beModelCtrlInfoRideOn4_vtableRead();
void beModelCtrlInfoRideOn_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802C72BC();
extern char beModelCtrlInfoRideOn4_className[];
extern char beModelCtrlInfoRideOn4_meta[];
void beModelCtrlInfoRideOn4_register();
void *beModelCtrlInfoRideOn4_getMetaCall();
}
extern "C" {
void beModelCtrlInfoRideOn4_arkRegister(){
 meta_registerNow((int)beModelCtrlInfoRideOn4_register);
}
void beModelCtrlInfoRideOn4_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlInfoRideOn4_meta,(int)beModelCtrlInfoRideOn_register,(int)fn_802C72BC,(int)beModelCtrlInfoRideOn4_getMetaCall,(int)beModelCtrlInfoRideOn4_className,120,(int)beModelCtrlInfoRideOn4_vtableRead,(int)beModelCtrlInfoRideOn4_fieldInit,0,0);
}
void *beModelCtrlInfoRideOn4_getMetaCall(){return beModelCtrlInfoRideOn4_getMeta();}
}
#pragma pop
