#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003EC68(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801BDBA0();
void *beHitLandModelTraversal_metaObject();
void *beHitLandModelOrder_metaObject();
extern char beHitLandModel_fieldTypes[];
extern char beHitLandModel_fieldNames[];
extern char beHitLandModel_fieldStorage[];
extern char beHitLandModel_fieldOffsets[];
extern void *beHitLandModel_meta;
}
extern "C" {
void beHitLandModel_fieldInit(){
 void *value0=beHitLandModel_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beHitLandModel_fieldTypes,5);
 void *value2=meta_field(value0,value1);
 void *value3=beHitLandModelOrder_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beHitLandModelTraversal_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_801BDBA0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 fn_8003EC68(value8,1);
 meta_setupFields(value0,beHitLandModel_fieldNames,beHitLandModel_fieldStorage,beHitLandModel_fieldOffsets,value1);
}
}
#pragma pop
