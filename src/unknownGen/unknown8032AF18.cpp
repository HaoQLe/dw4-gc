#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beNDMWStatusInfoWork_metaObject();
extern char beNDMWStatusInfoRam_fieldTypes[];
extern char beNDMWStatusInfoRam_fieldNames[];
extern char beNDMWStatusInfoRam_fieldStorage[];
extern char beNDMWStatusInfoRam_fieldOffsets[];
extern void *beNDMWStatusInfoRam_meta;
}
extern "C" {
void beNDMWStatusInfoRam_fieldInit(){
 void *value0=beNDMWStatusInfoRam_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWStatusInfoRam_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=beNDMWStatusInfoWork_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beNDMWStatusInfoRam_fieldNames,beNDMWStatusInfoRam_fieldStorage,beNDMWStatusInfoRam_fieldOffsets,value1);
}
}
#pragma pop
