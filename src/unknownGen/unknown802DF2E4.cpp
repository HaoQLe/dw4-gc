#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053650(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80071694(void *,int);
void *beCriFxXbData_metaObject();
extern char beCriFxInfo_fieldTypes[];
extern char beCriFxInfo_fieldNames[];
extern char beCriFxInfo_fieldStorage[];
extern char beCriFxInfo_fieldOffsets[];
extern void *beCriFxInfo_meta;
}
extern "C" {
void beCriFxInfo_fieldInit(){
 void *value0=beCriFxInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beCriFxInfo_fieldTypes,4);
 void *value2=meta_field(value0,value1);
 fn_80071694(value2,0);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80053650(value3,-1);
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 fn_80053650(value4,-1);
 void *value5=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value6=beCriFxXbData_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+56)=value6;
 meta_setupFields(value0,beCriFxInfo_fieldNames,beCriFxInfo_fieldStorage,beCriFxInfo_fieldOffsets,value1);
}
}
#pragma pop
