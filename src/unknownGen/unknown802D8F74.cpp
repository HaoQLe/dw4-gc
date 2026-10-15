#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801C89F0();
extern char beFontInfoData_fieldTypes[];
extern char beFontInfoData_fieldNames[];
extern char beFontInfoData_fieldStorage[];
extern char beFontInfoData_fieldOffsets[];
extern void *beFontInfoData_meta;
}
extern "C" {
void beFontInfoData_fieldInit(){
 void *value0=beFontInfoData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beFontInfoData_fieldTypes,7);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801C89F0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beFontInfoData_fieldNames,beFontInfoData_fieldStorage,beFontInfoData_fieldOffsets,value1);
}
}
#pragma pop
