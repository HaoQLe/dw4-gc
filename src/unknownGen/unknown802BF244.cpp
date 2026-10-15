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
extern char beSvFileMakeApi_fieldTypes[];
extern char beSvFileMakeApi_fieldNames[];
extern char beSvFileMakeApi_fieldStorage[];
extern char beSvFileMakeApi_fieldOffsets[];
extern void *beSvFileMakeApi_meta;
}
extern "C" {
void beSvFileMakeApi_fieldInit(){
 void *value0=beSvFileMakeApi_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beSvFileMakeApi_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 void *value3=beSvPlatBaseData_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beSaveMemoryObj_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 meta_setupFields(value0,beSvFileMakeApi_fieldNames,beSvFileMakeApi_fieldStorage,beSvFileMakeApi_fieldOffsets,value1);
}
}
#pragma pop
