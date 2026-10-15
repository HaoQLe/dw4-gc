#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beHitLandDelivInfo_getMeta();
void beHitLandDelivInfo_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void beHitLandDeliv_arkRegister();
extern char lbl_8041CD10[];
extern char beHitLandDelivInfo_className[];
extern char lbl_804D1CB8[];
extern char lbl_804D1CCC[];
extern char beHitLandDelivInfo_meta[];
extern void *lbl_80535248;
extern void *beHitLandDeliv_meta;
extern void *lbl_805621F4;
void beHitLandDelivInfo_register();
void *beHitLandDelivInfo_getMetaCall();
}
extern "C" {
void *fn_802D620C(){
 if(!lbl_80535248) lbl_80535248=fn_800635C8(lbl_8041CD10,lbl_804D1CB8,lbl_804D1CCC,0x5);
 return lbl_80535248;
}
}
#pragma pop
