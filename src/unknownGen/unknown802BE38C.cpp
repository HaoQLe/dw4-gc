#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beSvPlatBaseData_metaObject();
void *beSaveMemoryObj_metaObject();
extern char beSvWriteMediaApi_fieldTypes[];
extern char beSvWriteMediaApi_fieldNames[];
extern char beSvWriteMediaApi_fieldStorage[];
extern char beSvWriteMediaApi_fieldOffsets[];
extern void *beSvWriteMediaApi_meta;
}
extern "C" {
void beSvWriteMediaApi_fieldInit(){
 void *value0=beSvWriteMediaApi_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beSvWriteMediaApi_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 void *value3=beSvPlatBaseData_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beSaveMemoryObj_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 meta_setupFields(value0,beSvWriteMediaApi_fieldNames,beSvWriteMediaApi_fieldStorage,beSvWriteMediaApi_fieldOffsets,value1);
}
}
#pragma pop
