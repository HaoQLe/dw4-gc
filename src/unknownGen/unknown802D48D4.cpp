#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beHitLandModelInfo_fieldInit();
void *beHitLandModelInfo_getMeta();
void beHitLandModelInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_8041FD40[];
extern char lbl_804D1A70[];
extern char lbl_805351AC[];
void beHitLandModelInfo_register();
void *beHitLandModelInfo_getMetaCall();
}
extern "C" {
void fn_802D48D4(){
 fn_80066188((int)beHitLandModelInfo_register);
}
void beHitLandModelInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805351AC,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beHitLandModelInfo_getMetaCall,(int)lbl_8041FD40,44,(int)beHitLandModelInfo_vtableRead,(int)beHitLandModelInfo_fieldInit,0,(int)lbl_804D1A70);
}
void *beHitLandModelInfo_getMetaCall(){return beHitLandModelInfo_getMeta();}
}
#pragma pop
