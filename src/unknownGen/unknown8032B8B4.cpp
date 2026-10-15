#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
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
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E1AF4,3);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value3=beNDMWItemBaseList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804E1B00,lbl_804E1B0C,lbl_804E1B18,value1);
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
