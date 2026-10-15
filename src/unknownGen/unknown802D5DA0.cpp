#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoRam_register();
void beHitLandDelivInfoRam_fieldInit();
void *beHitLandDelivInfoRam_getMeta();
void beHitLandDelivInfoRam_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
extern char beHitLandDelivInfoRam_className[];
extern char lbl_804D1C20[];
extern char beHitLandDelivInfoRam_meta[];
void beHitLandDelivInfoRam_register();
void *beHitLandDelivInfoRam_getMetaCall();
}
extern "C" {
void beHitLandDelivInfoRam_registerNow(){
 meta_registerNow((int)beHitLandDelivInfoRam_register);
}
void beHitLandDelivInfoRam_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beHitLandDelivInfoRam_meta,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beHitLandDelivInfoRam_getMetaCall,(int)beHitLandDelivInfoRam_className,104,(int)beHitLandDelivInfoRam_vtableRead,(int)beHitLandDelivInfoRam_fieldInit,0,(int)lbl_804D1C20);
}
void *beHitLandDelivInfoRam_getMetaCall(){return beHitLandDelivInfoRam_getMeta();}
}
#pragma pop
