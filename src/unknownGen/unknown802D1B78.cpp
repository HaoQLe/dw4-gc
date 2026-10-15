#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beLuaDataList_metaObject();
extern char beLuaInfo_fieldTypes[];
extern char beLuaInfo_fieldNames[];
extern char beLuaInfo_fieldStorage[];
extern char beLuaInfo_fieldOffsets[];
extern void *beLuaInfo_meta;
}
extern "C" {
void beLuaInfo_fieldInit(){
 void *value0=beLuaInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beLuaInfo_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=beLuaDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beLuaInfo_fieldNames,beLuaInfo_fieldStorage,beLuaInfo_fieldOffsets,value1);
}
}
#pragma pop
