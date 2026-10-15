#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void beHitLandModelOrder_registerNow();
extern char lbl_804D1B4C[];
extern char lbl_804D1B50[];
extern char lbl_804D1B54[];
extern char lbl_804D1B58[];
extern void *beHitLandModelTraversal_meta;
extern void *beHitLandModelOrder_meta;
extern void *lbl_805621F4;
void *beHitLandModelOrder_metaObject();
}
extern "C" {
void beHitLandModelTraversal_fieldInit(){
 void *value0=beHitLandModelTraversal_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D1B4C,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=beHitLandModelOrder_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804D1B50,lbl_804D1B54,lbl_804D1B58,value1);
}
void *beHitLandModelOrder_create(void *object){
 beHitLandModelOrder_registerNow();
 return meta_createInstance(beHitLandModelOrder_meta,object);
}
void *beHitLandModelOrder_metaObject(){
 if(!beHitLandModelOrder_meta) beHitLandModelOrder_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beHitLandModelOrder_meta;
}
void *beHitLandModelOrder_getMeta(){
 if(!beHitLandModelOrder_meta || !(reinterpret_cast<unsigned int *>(beHitLandModelOrder_meta)[0x24/4]&4)) beHitLandModelOrder_registerNow();
 return beHitLandModelOrder_meta;
}
}
#pragma pop
