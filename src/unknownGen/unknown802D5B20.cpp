#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beHitLandResultData_fieldInit();
void *beHitLandResultData_getMeta();
void beHitLandResultData_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041FE78[];
extern char lbl_80535210[];
void beHitLandResultData_register();
void *beHitLandResultData_getMetaCall();
}
extern "C" {
void fn_802D5B20(){
 fn_80066188((int)beHitLandResultData_register);
}
void beHitLandResultData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535210,(int)igObject_register,(int)fn_800237D0,(int)beHitLandResultData_getMetaCall,(int)lbl_8041FE78,88,(int)beHitLandResultData_vtableRead,(int)beHitLandResultData_fieldInit,0,0);
}
void *beHitLandResultData_getMetaCall(){return beHitLandResultData_getMeta();}
}
#pragma pop
