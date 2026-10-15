#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801B4DF0();
void *fn_801B74F0();
extern char beShadow01Info_fieldTypes[];
extern char beShadow01Info_fieldNames[];
extern char beShadow01Info_fieldStorage[];
extern char beShadow01Info_fieldOffsets[];
extern void *beShadow01Info_meta;
}
extern "C" {
void beShadow01Info_fieldInit(){
 void *value0=beShadow01Info_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beShadow01Info_fieldTypes,3);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801B74F0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_801B74F0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_801B4DF0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 meta_setupFields(value0,beShadow01Info_fieldNames,beShadow01Info_fieldStorage,beShadow01Info_fieldOffsets,value1);
}
}
#pragma pop
