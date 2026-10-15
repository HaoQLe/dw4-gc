#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053650(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beNDMWItemBase_metaObject();
extern char beNDMWMdlItemInfoWork_fieldTypes[];
extern char beNDMWMdlItemInfoWork_fieldNames[];
extern char beNDMWMdlItemInfoWork_fieldStorage[];
extern char beNDMWMdlItemInfoWork_fieldOffsets[];
extern void *beNDMWMdlItemInfoWork_meta;
}
extern "C" {
void beNDMWMdlItemInfoWork_fieldInit(){
 void *value0=beNDMWMdlItemInfoWork_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWMdlItemInfoWork_fieldTypes,8);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=beNDMWItemBase_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 fn_80053650(value4,-1);
 meta_setupFields(value0,beNDMWMdlItemInfoWork_fieldNames,beNDMWMdlItemInfoWork_fieldStorage,beNDMWMdlItemInfoWork_fieldOffsets,value1);
}
}
#pragma pop
