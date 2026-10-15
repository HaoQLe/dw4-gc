#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80028F84();
void fn_80053650(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beSvPlatBaseData_metaObject();
void *beSaveDataDeliver_metaObject();
extern char beSvReadMediaApi_fieldTypes[];
extern char beSvReadMediaApi_fieldNames[];
extern char beSvReadMediaApi_fieldStorage[];
extern char beSvReadMediaApi_fieldOffsets[];
extern void *beSvReadMediaApi_meta;
}
extern "C" {
void beSvReadMediaApi_fieldInit(){
 void *value0=beSvReadMediaApi_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beSvReadMediaApi_fieldTypes,5);
 void *value2=meta_field(value0,value1);
 void *value3=beSvPlatBaseData_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beSaveDataDeliver_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 fn_80053650(value6,16);
 void *value7=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value8=beSaveDataDeliver_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value7)+56)=value8;
 void *value9=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value10=fn_80028F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value9)+56)=value10;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value9)+52)=1;
 meta_setupFields(value0,beSvReadMediaApi_fieldNames,beSvReadMediaApi_fieldStorage,beSvReadMediaApi_fieldOffsets,value1);
}
}
#pragma pop
