#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beNDMWWindow_metaObject();
extern char beNDMWStatus_fieldTypes[];
extern char beNDMWStatus_fieldNames[];
extern char beNDMWStatus_fieldStorage[];
extern char beNDMWStatus_fieldOffsets[];
extern void *beNDMWStatus_meta;
}
extern "C" {
void beNDMWStatus_fieldInit(){
 void *value0=beNDMWStatus_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWStatus_fieldTypes,3);
 void *value2=meta_field(value0,value1);
 void *value3=beNDMWWindow_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beNDMWStatus_fieldNames,beNDMWStatus_fieldStorage,beNDMWStatus_fieldOffsets,value1);
}
}
#pragma pop
