#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beAsTargetModelDataList_metaObject();
extern char beActionStarterInfo_fieldTypes[];
extern char beActionStarterInfo_fieldNames[];
extern char beActionStarterInfo_fieldStorage[];
extern char beActionStarterInfo_fieldOffsets[];
extern void *beActionStarterInfo_meta;
}
extern "C" {
void beActionStarterInfo_fieldInit(){
 void *value0=beActionStarterInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beActionStarterInfo_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=beAsTargetModelDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beActionStarterInfo_fieldNames,beActionStarterInfo_fieldStorage,beActionStarterInfo_fieldOffsets,value1);
}
}
#pragma pop
