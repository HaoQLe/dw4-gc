#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void beNDMWShopDevice_registerNow();
void *beNDMWItemBaseList_metaObject();
extern char lbl_804E1AF4[];
extern char lbl_804E1B00[];
extern char lbl_804E1B0C[];
extern char lbl_804E1B18[];
extern void *beNDMWShopJunk_meta;
extern void *beNDMWShopDevice_meta;
}
extern "C" {
void beNDMWShopJunk_fieldInit(){
 void *value0=beNDMWShopJunk_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E1AF4,3);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value3=beNDMWItemBaseList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804E1B00,lbl_804E1B0C,lbl_804E1B18,value1);
}
void *beNDMWShopDevice_create(void *object){
 beNDMWShopDevice_registerNow();
 return meta_createInstance(beNDMWShopDevice_meta,object);
}
void *beNDMWShopDevice_getMeta(){
 if(!beNDMWShopDevice_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopDevice_meta)[0x24/4]&4)) beNDMWShopDevice_registerNow();
 return beNDMWShopDevice_meta;
}
}
#pragma pop
