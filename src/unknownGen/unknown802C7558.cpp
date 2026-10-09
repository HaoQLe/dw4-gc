#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlInfoRideOn3_fieldInit();
void *beModelCtrlInfoRideOn3_getMeta();
void beModelCtrlInfoRideOn3_vtableRead();
void beModelCtrlInfoRideOn_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802C72BC();
extern char lbl_8041EDC4[];
extern char lbl_80534D4C[];
void beModelCtrlInfoRideOn3_register();
void *beModelCtrlInfoRideOn3_getMetaCall();
}
extern "C" {
void fn_802C7558(){
 fn_80066188((int)beModelCtrlInfoRideOn3_register);
}
void beModelCtrlInfoRideOn3_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534D4C,(int)beModelCtrlInfoRideOn_register,(int)fn_802C72BC,(int)beModelCtrlInfoRideOn3_getMetaCall,(int)lbl_8041EDC4,112,(int)beModelCtrlInfoRideOn3_vtableRead,(int)beModelCtrlInfoRideOn3_fieldInit,0,0);
}
void *beModelCtrlInfoRideOn3_getMetaCall(){return beModelCtrlInfoRideOn3_getMeta();}
}
#pragma pop
