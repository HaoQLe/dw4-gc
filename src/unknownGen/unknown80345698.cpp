#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029C30();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *igInsightCore_metaObject();
extern char beNDMWAfsStageLoad_fieldTypes[];
extern char beNDMWAfsStageLoad_fieldNames[];
extern char beNDMWAfsStageLoad_fieldStorage[];
extern char beNDMWAfsStageLoad_fieldOffsets[];
extern void *beNDMWAfsStageLoad_meta;
}
extern "C" {
void beNDMWAfsStageLoad_fieldInit(){
 void *value0=beNDMWAfsStageLoad_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWAfsStageLoad_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 void *value3=igInsightCore_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_80029C30();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 meta_setupFields(value0,beNDMWAfsStageLoad_fieldNames,beNDMWAfsStageLoad_fieldStorage,beNDMWAfsStageLoad_fieldOffsets,value1);
}
}
#pragma pop
