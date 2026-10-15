#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003EC68(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beNDMWLoadSlotPlayer_metaObject();
extern char beNDMWLoadSavePlWork_fieldTypes[];
extern char beNDMWLoadSavePlWork_fieldNames[];
extern char beNDMWLoadSavePlWork_fieldStorage[];
extern char beNDMWLoadSavePlWork_fieldOffsets[];
extern void *beNDMWLoadSavePlWork_meta;
}
extern "C" {
void beNDMWLoadSavePlWork_fieldInit(){
 void *value0=beNDMWLoadSavePlWork_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWLoadSavePlWork_fieldTypes,14);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 fn_8003EC68(value2,1);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 fn_8003EC68(value3,1);
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+8));
 void *value5=beNDMWLoadSlotPlayer_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 meta_setupFields(value0,beNDMWLoadSavePlWork_fieldNames,beNDMWLoadSavePlWork_fieldStorage,beNDMWLoadSavePlWork_fieldOffsets,value1);
}
}
#pragma pop
