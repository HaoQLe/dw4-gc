#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beTimerData_fieldInit();
void *beTimerData_getMeta();
void beTimerData_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041D2F0[];
extern char lbl_8053464C[];
void beTimerData_register();
void *beTimerData_getMetaCall();
}
extern "C" {
void fn_802B5D90(){
 fn_80066188((int)beTimerData_register);
}
void beTimerData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053464C,(int)igObject_register,(int)fn_800237D0,(int)beTimerData_getMetaCall,(int)lbl_8041D2F0,32,(int)beTimerData_vtableRead,(int)beTimerData_fieldInit,0,0);
}
void *beTimerData_getMetaCall(){return beTimerData_getMeta();}
}
#pragma pop
