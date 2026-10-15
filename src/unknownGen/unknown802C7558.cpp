#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlInfoRideOn3_fieldInit();
void *beModelCtrlInfoRideOn3_getMeta();
void beModelCtrlInfoRideOn3_vtableRead();
void beModelCtrlInfoRideOn_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802C72BC();
extern char beModelCtrlInfoRideOn3_className[];
extern char beModelCtrlInfoRideOn3_meta[];
void beModelCtrlInfoRideOn3_register();
void *beModelCtrlInfoRideOn3_getMetaCall();
}
extern "C" {
void beModelCtrlInfoRideOn3_arkRegister(){
 meta_registerNow((int)beModelCtrlInfoRideOn3_register);
}
void beModelCtrlInfoRideOn3_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlInfoRideOn3_meta,(int)beModelCtrlInfoRideOn_register,(int)fn_802C72BC,(int)beModelCtrlInfoRideOn3_getMetaCall,(int)beModelCtrlInfoRideOn3_className,112,(int)beModelCtrlInfoRideOn3_vtableRead,(int)beModelCtrlInfoRideOn3_fieldInit,0,0);
}
void *beModelCtrlInfoRideOn3_getMetaCall(){return beModelCtrlInfoRideOn3_getMeta();}
}
#pragma pop
