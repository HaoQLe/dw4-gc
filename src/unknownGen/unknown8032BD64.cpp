#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void beNDMWShopCtrlXdataChip_registerNow();
void *beNDMWItemBaseList_metaObject();
extern char lbl_804E1B2C[];
extern char lbl_804E1B30[];
extern char lbl_804E1B34[];
extern char lbl_804E1B38[];
extern void *beNDMWShopDevice_meta;
extern void *beNDMWShopCtrlXdataChip_meta;
}
extern "C" {
void beNDMWShopDevice_fieldInit(){
 void *value0=beNDMWShopDevice_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E1B2C,1);
 void *value2=meta_field(value0,value1);
 void *value3=beNDMWItemBaseList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804E1B30,lbl_804E1B34,lbl_804E1B38,value1);
}
void *beNDMWShopCtrlXdataChip_create(void *object){
 beNDMWShopCtrlXdataChip_registerNow();
 return meta_createInstance(beNDMWShopCtrlXdataChip_meta,object);
}
void *beNDMWShopCtrlXdataChip_getMeta(){
 if(!beNDMWShopCtrlXdataChip_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopCtrlXdataChip_meta)[0x24/4]&4)) beNDMWShopCtrlXdataChip_registerNow();
 return beNDMWShopCtrlXdataChip_meta;
}
}
#pragma pop
