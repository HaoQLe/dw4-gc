#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_80122100();
extern char beTargetObj_fieldTypes[];
extern char beTargetObj_fieldNames[];
extern char beTargetObj_fieldStorage[];
extern char beTargetObj_fieldOffsets[];
extern void *beTargetObj_meta;
}
extern "C" {
void beTargetObj_fieldInit(){
 void *value0=beTargetObj_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beTargetObj_fieldTypes,3);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80122100();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_80122100();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 meta_setupFields(value0,beTargetObj_fieldNames,beTargetObj_fieldStorage,beTargetObj_fieldOffsets,value1);
}
}
#pragma pop
