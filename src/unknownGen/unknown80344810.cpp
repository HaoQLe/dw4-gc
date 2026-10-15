#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beDataObjListList_metaObject();
void *beDataObjList_metaObject();
void *beDataBase_metaObject();
extern char beNDMWGameRam_fieldTypes[];
extern char beNDMWGameRam_fieldNames[];
extern char beNDMWGameRam_fieldStorage[];
extern char beNDMWGameRam_fieldOffsets[];
extern void *beNDMWGameRam_meta;
}
extern "C" {
void beNDMWGameRam_fieldInit(){
 void *value0=beNDMWGameRam_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWGameRam_fieldTypes,11);
 void *value2=meta_field(value0,value1);
 void *value3=beDataBase_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beDataBase_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=beDataBase_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value9=beDataBase_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 void *value10=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value11=beDataBase_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 void *value12=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 void *value13=beDataBase_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+56)=value13;
 void *value14=meta_field(value0,(reinterpret_cast<char *>(value1)+6));
 void *value15=beDataBase_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value14)+56)=value15;
 void *value16=meta_field(value0,(reinterpret_cast<char *>(value1)+7));
 void *value17=beDataBase_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value16)+56)=value17;
 void *value18=meta_field(value0,(reinterpret_cast<char *>(value1)+8));
 void *value19=beDataObjList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value18)+56)=value19;
 void *value20=meta_field(value0,(reinterpret_cast<char *>(value1)+9));
 void *value21=beDataObjListList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value20)+56)=value21;
 meta_setupFields(value0,beNDMWGameRam_fieldNames,beNDMWGameRam_fieldStorage,beNDMWGameRam_fieldOffsets,value1);
}
}
#pragma pop
