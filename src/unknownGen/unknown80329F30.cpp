#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80071694(void *,int);
extern char beNDMWShopSelect00_fieldTypes[];
extern char beNDMWShopSelect00_fieldNames[];
extern char beNDMWShopSelect00_fieldStorage[];
extern char beNDMWShopSelect00_fieldOffsets[];
extern void *beNDMWShopSelect00_meta;
}
extern "C" {
void beNDMWShopSelect00_fieldInit(){
 void *value0=beNDMWShopSelect00_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWShopSelect00_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 fn_80071694(value2,0);
 meta_setupFields(value0,beNDMWShopSelect00_fieldNames,beNDMWShopSelect00_fieldStorage,beNDMWShopSelect00_fieldOffsets,value1);
}
}
#pragma pop
