#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053650(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beNumVerInsideDataList_metaObject();
extern char beNumVerData_fieldTypes[];
extern char beNumVerData_fieldNames[];
extern char beNumVerData_fieldStorage[];
extern char beNumVerData_fieldOffsets[];
extern void *beNumVerData_meta;
}
extern "C" {
void beNumVerData_fieldInit(){
 void *value0=beNumVerData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNumVerData_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 fn_80053650(value2,-1);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value4=beNumVerInsideDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+52)=1;
 meta_setupFields(value0,beNumVerData_fieldNames,beNumVerData_fieldStorage,beNumVerData_fieldOffsets,value1);
}
}
#pragma pop
