#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beSeDataList_metaObject();
extern char beSeInfoData_fieldTypes[];
extern char beSeInfoData_fieldNames[];
extern char beSeInfoData_fieldStorage[];
extern char beSeInfoData_fieldOffsets[];
extern void *beSeInfoData_meta;
}
extern "C" {
void beSeInfoData_fieldInit(){
 void *value0=beSeInfoData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beSeInfoData_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=beSeDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beSeInfoData_fieldNames,beSeInfoData_fieldStorage,beSeInfoData_fieldOffsets,value1);
}
}
#pragma pop
