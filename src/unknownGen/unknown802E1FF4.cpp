#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801AC2D4();
void *fn_801ADB98();
void *fn_801BFF38();
extern char beCameraBoxData_fieldTypes[];
extern char beCameraBoxData_fieldNames[];
extern char beCameraBoxData_fieldStorage[];
extern char beCameraBoxData_fieldOffsets[];
extern void *beCameraBoxData_meta;
}
extern "C" {
void beCameraBoxData_fieldInit(){
 void *value0=beCameraBoxData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beCameraBoxData_fieldTypes,5);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_801BFF38();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_801AC2D4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value9=fn_801AC2D4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 void *value10=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value11=fn_801AC2D4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value10)+52)=1;
 meta_setupFields(value0,beCameraBoxData_fieldNames,beCameraBoxData_fieldStorage,beCameraBoxData_fieldOffsets,value1);
}
}
#pragma pop
