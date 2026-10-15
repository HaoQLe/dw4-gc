#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beNDMWShopSelect02_fieldTypes[];
extern char beNDMWShopSelect02_fieldNames[];
extern char beNDMWShopSelect02_fieldStorage[];
extern char beNDMWShopSelect02_fieldOffsets[];
extern void *beNDMWShopSelect02_meta;
}
extern "C" {
void beNDMWShopSelect02_fieldInit(){
 void *value0=beNDMWShopSelect02_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWShopSelect02_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beNDMWShopSelect02_fieldNames,beNDMWShopSelect02_fieldStorage,beNDMWShopSelect02_fieldOffsets,value1);
}
}
#pragma pop
