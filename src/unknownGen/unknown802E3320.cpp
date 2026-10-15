#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003EC68(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beBaseInfoManager_metaObject();
void *beBaseInfo_metaObject();
void *beBaseInfoDataList_metaObject();
extern char beBaseInfoRam_fieldTypes[];
extern char beBaseInfoRam_fieldNames[];
extern char beBaseInfoRam_fieldStorage[];
extern char beBaseInfoRam_fieldOffsets[];
extern void *beBaseInfoRam_meta;
}
extern "C" {
void beBaseInfoRam_fieldInit(){
 void *value0=beBaseInfoRam_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beBaseInfoRam_fieldTypes,9);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=beBaseInfo_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value5=beBaseInfoManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+38)=0;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 fn_8003EC68(value6,1);
 void *value7=meta_field(value0,(reinterpret_cast<char *>(value1)+8));
 void *value8=beBaseInfoDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value7)+56)=value8;
 meta_setupFields(value0,beBaseInfoRam_fieldNames,beBaseInfoRam_fieldStorage,beBaseInfoRam_fieldOffsets,value1);
}
}
#pragma pop
