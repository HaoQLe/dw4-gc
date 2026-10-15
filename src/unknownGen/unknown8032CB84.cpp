#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beNDMWShopCtrlDiskSell_fieldTypes[];
extern char beNDMWShopCtrlDiskSell_fieldNames[];
extern char beNDMWShopCtrlDiskSell_fieldStorage[];
extern char beNDMWShopCtrlDiskSell_fieldOffsets[];
extern void *beNDMWShopCtrlDiskSell_meta;
}
extern "C" {
void beNDMWShopCtrlDiskSell_fieldInit(){
 void *value0=beNDMWShopCtrlDiskSell_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWShopCtrlDiskSell_fieldTypes,5);
 void *value2=meta_field(value0,value1);
 void *value3=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beNDMWShopCtrlDiskSell_fieldNames,beNDMWShopCtrlDiskSell_fieldStorage,beNDMWShopCtrlDiskSell_fieldOffsets,value1);
}
}
#pragma pop
