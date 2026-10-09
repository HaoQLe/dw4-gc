#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beHitLandModelOrder_fieldInit();
void *beHitLandModelOrder_getMeta();
void beHitLandModelOrder_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041FE04[];
extern char lbl_804D1B5C[];
extern char lbl_805351E4[];
void beHitLandModelOrder_register();
void *beHitLandModelOrder_getMetaCall();
}
extern "C" {
void fn_802D5648(){
 fn_80066188((int)beHitLandModelOrder_register);
}
void beHitLandModelOrder_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805351E4,(int)igObject_register,(int)fn_800237D0,(int)beHitLandModelOrder_getMetaCall,(int)lbl_8041FE04,60,(int)beHitLandModelOrder_vtableRead,(int)beHitLandModelOrder_fieldInit,0,(int)lbl_804D1B5C);
}
void *beHitLandModelOrder_getMetaCall(){return beHitLandModelOrder_getMeta();}
}
#pragma pop
