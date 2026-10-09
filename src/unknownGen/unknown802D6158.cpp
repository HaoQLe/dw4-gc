#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beHitLandDelivInfo_getMeta();
void beHitLandDelivInfo_vtableRead();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void fn_802D645C();
extern char lbl_8041CD10[];
extern char lbl_8041FEFC[];
extern char lbl_804D1CB8[];
extern char lbl_804D1CCC[];
extern char lbl_80535244[];
extern void *lbl_80535248;
extern void *lbl_8053524C;
extern void *lbl_805621F4;
void beHitLandDelivInfo_register();
void *beHitLandDelivInfo_getMetaCall();
}
extern "C" {
void fn_802D6158(){
 fn_80066188((int)beHitLandDelivInfo_register);
}
void beHitLandDelivInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535244,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beHitLandDelivInfo_getMetaCall,(int)lbl_8041FEFC,28,(int)beHitLandDelivInfo_vtableRead,0,0,0);
}
void *beHitLandDelivInfo_getMetaCall(){return beHitLandDelivInfo_getMeta();}
void *fn_802D620C(){
 if(!lbl_80535248) lbl_80535248=fn_800635C8(lbl_8041CD10,lbl_804D1CB8,lbl_804D1CCC,0x5);
 return lbl_80535248;
}
void *fn_802D626C(void *object){
 fn_802D645C();
 return fn_8006546C(lbl_8053524C,object);
}
void *fn_802D62AC(){
 if(!lbl_8053524C) lbl_8053524C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053524C;
}
void *beHitLandDeliv_getMeta(){
 if(!lbl_8053524C || !(reinterpret_cast<unsigned int *>(lbl_8053524C)[0x24/4]&4)) fn_802D645C();
 return lbl_8053524C;
}
}
#pragma pop
