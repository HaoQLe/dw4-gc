#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80037E48();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *igInsightCore_metaObject();
extern char beNDMWDegiData_fieldTypes[];
extern char beNDMWDegiData_fieldNames[];
extern char beNDMWDegiData_fieldStorage[];
extern char beNDMWDegiData_fieldOffsets[];
extern void *beNDMWDegiData_meta;
}
extern "C" {
void beNDMWDegiData_fieldInit(){
 void *value0=beNDMWDegiData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWDegiData_fieldTypes,13);
 void *value2=meta_field(value0,value1);
 void *value3=igInsightCore_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+52)=(void *)10;
 void *value5=meta_field(value0,(reinterpret_cast<char *>(value1)+12));
 void *value6=fn_80037E48();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+60)=value6;
 meta_setupFields(value0,beNDMWDegiData_fieldNames,beNDMWDegiData_fieldStorage,beNDMWDegiData_fieldOffsets,value1);
}
}
#pragma pop
