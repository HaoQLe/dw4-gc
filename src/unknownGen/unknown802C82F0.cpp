#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003EC68(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_80122100();
void *fn_801225BC();
extern char beModelCtrlInfoHitBody_fieldTypes[];
extern char beModelCtrlInfoHitBody_fieldNames[];
extern char beModelCtrlInfoHitBody_fieldStorage[];
extern char beModelCtrlInfoHitBody_fieldOffsets[];
extern void *beModelCtrlInfoHitBody_meta;
}
extern "C" {
void beModelCtrlInfoHitBody_fieldInit(){
 void *value0=beModelCtrlInfoHitBody_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beModelCtrlInfoHitBody_fieldTypes,7);
 void *value2=meta_field(value0,value1);
 fn_8003EC68(value2,1);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value4=fn_801225BC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+60)=0;
 void *value5=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value6=fn_80122100();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+56)=value6;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value5)+52)=1;
 void *value7=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 void *value8=fn_80122100();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value7)+56)=value8;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value7)+52)=1;
 void *value9=meta_field(value0,(reinterpret_cast<char *>(value1)+6));
 void *value10=fn_801225BC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value9)+56)=value10;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value9)+52)=1;
 meta_setupFields(value0,beModelCtrlInfoHitBody_fieldNames,beModelCtrlInfoHitBody_fieldStorage,beModelCtrlInfoHitBody_fieldOffsets,value1);
}
}
#pragma pop
