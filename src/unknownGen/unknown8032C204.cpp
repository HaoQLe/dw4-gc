#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beNDMWItemBaseList_metaObject();
extern char beNDMWShopCtrlXdataChip_fieldTypes[];
extern char beNDMWShopCtrlXdataChip_fieldNames[];
extern char beNDMWShopCtrlXdataChip_fieldStorage[];
extern char beNDMWShopCtrlXdataChip_fieldOffsets[];
extern void *beNDMWShopCtrlXdataChip_meta;
}
extern "C" {
void beNDMWShopCtrlXdataChip_fieldInit(){
 void *value0=beNDMWShopCtrlXdataChip_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWShopCtrlXdataChip_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=beNDMWItemBaseList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beNDMWShopCtrlXdataChip_fieldNames,beNDMWShopCtrlXdataChip_fieldStorage,beNDMWShopCtrlXdataChip_fieldOffsets,value1);
}
}
#pragma pop
