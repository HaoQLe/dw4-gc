#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beSystem_metaObject();
void *bePadManager_metaObject();
extern char beNDMWSaveIntf_fieldTypes[];
extern char beNDMWSaveIntf_fieldNames[];
extern char beNDMWSaveIntf_fieldStorage[];
extern char beNDMWSaveIntf_fieldOffsets[];
extern void *beNDMWSaveIntf_meta;
}
extern "C" {
void beNDMWSaveIntf_fieldInit(){
 void *value0=beNDMWSaveIntf_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWSaveIntf_fieldTypes,3);
 void *value2=meta_field(value0,value1);
 void *value3=bePadManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beSystem_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 meta_setupFields(value0,beNDMWSaveIntf_fieldNames,beNDMWSaveIntf_fieldStorage,beNDMWSaveIntf_fieldOffsets,value1);
}
}
#pragma pop
