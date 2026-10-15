#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beGeneraterDataList_metaObject();
extern char beGeneraterInfo_fieldTypes[];
extern char beGeneraterInfo_fieldNames[];
extern char beGeneraterInfo_fieldStorage[];
extern char beGeneraterInfo_fieldOffsets[];
extern void *beGeneraterInfo_meta;
}
extern "C" {
void beGeneraterInfo_fieldInit(){
 void *value0=beGeneraterInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beGeneraterInfo_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=beGeneraterDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beGeneraterInfo_fieldNames,beGeneraterInfo_fieldStorage,beGeneraterInfo_fieldOffsets,value1);
}
}
#pragma pop
