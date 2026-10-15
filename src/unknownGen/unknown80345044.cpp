#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *igAdxAfsFileList_metaObject();
void *beNDMWAfsSetupDataList_metaObject();
extern char beNDMWAfsSetupInfo_fieldTypes[];
extern char beNDMWAfsSetupInfo_fieldNames[];
extern char beNDMWAfsSetupInfo_fieldStorage[];
extern char beNDMWAfsSetupInfo_fieldOffsets[];
extern void *beNDMWAfsSetupInfo_meta;
}
extern "C" {
void beNDMWAfsSetupInfo_fieldInit(){
 void *value0=beNDMWAfsSetupInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWAfsSetupInfo_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 void *value3=igAdxAfsFileList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beNDMWAfsSetupDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 meta_setupFields(value0,beNDMWAfsSetupInfo_fieldNames,beNDMWAfsSetupInfo_fieldStorage,beNDMWAfsSetupInfo_fieldOffsets,value1);
}
}
#pragma pop
