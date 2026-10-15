#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beHitLandModelOrder_fieldInit();
void *beHitLandModelOrder_getMeta();
void beHitLandModelOrder_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beHitLandModelOrder_className[];
extern char lbl_804D1B5C[];
extern char beHitLandModelOrder_meta[];
void beHitLandModelOrder_register();
void *beHitLandModelOrder_getMetaCall();
}
extern "C" {
void beHitLandModelOrder_registerNow(){
 meta_registerNow((int)beHitLandModelOrder_register);
}
void beHitLandModelOrder_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beHitLandModelOrder_meta,(int)igObject_register,(int)fn_800237D0,(int)beHitLandModelOrder_getMetaCall,(int)beHitLandModelOrder_className,60,(int)beHitLandModelOrder_vtableRead,(int)beHitLandModelOrder_fieldInit,0,(int)lbl_804D1B5C);
}
void *beHitLandModelOrder_getMetaCall(){return beHitLandModelOrder_getMeta();}
}
#pragma pop
