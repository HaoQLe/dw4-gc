#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoRam_register();
void beHitLandDelivInfoRam_fieldInit();
void *beHitLandDelivInfoRam_getMeta();
void beHitLandDelivInfoRam_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
extern char lbl_8041FE8C[];
extern char lbl_804D1C20[];
extern char lbl_8053521C[];
void beHitLandDelivInfoRam_register();
void *beHitLandDelivInfoRam_getMetaCall();
}
extern "C" {
void fn_802D5DA0(){
 fn_80066188((int)beHitLandDelivInfoRam_register);
}
void beHitLandDelivInfoRam_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053521C,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beHitLandDelivInfoRam_getMetaCall,(int)lbl_8041FE8C,104,(int)beHitLandDelivInfoRam_vtableRead,(int)beHitLandDelivInfoRam_fieldInit,0,(int)lbl_804D1C20);
}
void *beHitLandDelivInfoRam_getMetaCall(){return beHitLandDelivInfoRam_getMeta();}
}
#pragma pop
