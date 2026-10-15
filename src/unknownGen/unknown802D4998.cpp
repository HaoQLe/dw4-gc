#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80028F84();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801ADB98();
extern char beHitLandModelInfo_fieldTypes[];
extern char beHitLandModelInfo_fieldNames[];
extern char beHitLandModelInfo_fieldStorage[];
extern char beHitLandModelInfo_fieldOffsets[];
extern void *beHitLandModelInfo_meta;
}
extern "C" {
void beHitLandModelInfo_fieldInit(){
 void *value0=beHitLandModelInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beHitLandModelInfo_fieldTypes,4);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_80028F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 meta_setupFields(value0,beHitLandModelInfo_fieldNames,beHitLandModelInfo_fieldStorage,beHitLandModelInfo_fieldOffsets,value1);
}
}
#pragma pop
