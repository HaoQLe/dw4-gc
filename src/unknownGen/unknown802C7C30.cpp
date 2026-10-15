#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlInfoRideOn_fieldInit();
void *beModelCtrlInfoRideOn_getMeta();
void beModelCtrlInfoRideOn_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beModelCtrlInfoRideOn_className[];
extern char beModelCtrlInfoRideOn_dependencies[];
extern char beModelCtrlInfoRideOn_meta[];
void beModelCtrlInfoRideOn_register();
void *beModelCtrlInfoRideOn_getMetaCall();
}
extern "C" {
void beModelCtrlInfoRideOn_arkRegister(){
 meta_registerNow((int)beModelCtrlInfoRideOn_register);
}
void beModelCtrlInfoRideOn_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlInfoRideOn_meta,(int)igObject_register,(int)fn_800237D0,(int)beModelCtrlInfoRideOn_getMetaCall,(int)beModelCtrlInfoRideOn_className,84,(int)beModelCtrlInfoRideOn_vtableRead,(int)beModelCtrlInfoRideOn_fieldInit,0,(int)beModelCtrlInfoRideOn_dependencies);
}
void *beModelCtrlInfoRideOn_getMetaCall(){return beModelCtrlInfoRideOn_getMeta();}
}
#pragma pop
