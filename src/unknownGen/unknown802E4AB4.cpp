#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beActionStarterDataList_metaObject();
extern char beAsTargetModelData_fieldTypes[];
extern char beAsTargetModelData_fieldNames[];
extern char beAsTargetModelData_fieldStorage[];
extern char beAsTargetModelData_fieldOffsets[];
extern void *beAsTargetModelData_meta;
}
extern "C" {
void beAsTargetModelData_fieldInit(){
 void *value0=beAsTargetModelData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beAsTargetModelData_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=beActionStarterDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beAsTargetModelData_fieldNames,beAsTargetModelData_fieldStorage,beAsTargetModelData_fieldOffsets,value1);
}
}
#pragma pop
