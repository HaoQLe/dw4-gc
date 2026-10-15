#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void beNDMWShopCtrlXdataChip_arkRegister();
void *beNDMWItemBaseList_metaObject();
extern char beNDMWShopDevice_fieldTypes[];
extern char beNDMWShopDevice_fieldNames[];
extern char beNDMWShopDevice_fieldStorage[];
extern char beNDMWShopDevice_fieldOffsets[];
extern void *beNDMWShopDevice_meta;
extern void *beNDMWShopCtrlXdataChip_meta;
}
extern "C" {
void *beNDMWShopCtrlXdataChip_create(void *object){
 beNDMWShopCtrlXdataChip_arkRegister();
 return meta_createInstance(beNDMWShopCtrlXdataChip_meta,object);
}
void *beNDMWShopCtrlXdataChip_getMeta(){
 if(!beNDMWShopCtrlXdataChip_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopCtrlXdataChip_meta)[0x24/4]&4)) beNDMWShopCtrlXdataChip_arkRegister();
 return beNDMWShopCtrlXdataChip_meta;
}
}
#pragma pop
