#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029A5C();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beSoundInfo_fieldTypes[];
extern char beSoundInfo_fieldNames[];
extern char beSoundInfo_fieldStorage[];
extern char beSoundInfo_fieldOffsets[];
extern void *beSoundInfo_meta;
}
extern "C" {
void beSoundInfo_fieldInit(){
 void *value0=beSoundInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beSoundInfo_fieldTypes,4);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80029A5C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beSoundInfo_fieldNames,beSoundInfo_fieldStorage,beSoundInfo_fieldOffsets,value1);
}
}
#pragma pop
