#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void beHitLandModel_arkRegister();
extern char lbl_8041CD10[];
extern char lbl_804D1ABC[];
extern char lbl_804D1AD0[];
extern void *lbl_805351C0;
extern void *beHitLandModel_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D4A68(){
 if(!lbl_805351C0) lbl_805351C0=fn_800635C8(lbl_8041CD10,lbl_804D1ABC,lbl_804D1AD0,0x5);
 return lbl_805351C0;
}
void *beHitLandModel_create(void *object){
 beHitLandModel_arkRegister();
 return meta_createInstance(beHitLandModel_meta,object);
}
void *beHitLandModel_metaObject(){
 if(!beHitLandModel_meta) beHitLandModel_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beHitLandModel_meta;
}
void *beHitLandModel_getMeta(){
 if(!beHitLandModel_meta || !(reinterpret_cast<unsigned int *>(beHitLandModel_meta)[0x24/4]&4)) beHitLandModel_arkRegister();
 return beHitLandModel_meta;
}
}
#pragma pop
