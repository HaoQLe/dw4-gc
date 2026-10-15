#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beGeneraterItemDataOneList_metaObject();
extern char beGeneraterItemData_fieldTypes[];
extern char beGeneraterItemData_fieldNames[];
extern char beGeneraterItemData_fieldStorage[];
extern char beGeneraterItemData_fieldOffsets[];
extern void *beGeneraterItemData_meta;
}
extern "C" {
void beGeneraterItemData_fieldInit(){
 void *value0=beGeneraterItemData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beGeneraterItemData_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=beGeneraterItemDataOneList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beGeneraterItemData_fieldNames,beGeneraterItemData_fieldStorage,beGeneraterItemData_fieldOffsets,value1);
}
}
#pragma pop
