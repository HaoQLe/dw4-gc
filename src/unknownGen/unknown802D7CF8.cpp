#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beGeneraterItemDataList_metaObject();
extern char beGeneraterPlayerData_fieldTypes[];
extern char beGeneraterPlayerData_fieldNames[];
extern char beGeneraterPlayerData_fieldStorage[];
extern char beGeneraterPlayerData_fieldOffsets[];
extern void *beGeneraterPlayerData_meta;
}
extern "C" {
void beGeneraterPlayerData_fieldInit(){
 void *value0=beGeneraterPlayerData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beGeneraterPlayerData_fieldTypes,4);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value3=beGeneraterItemDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value5=beGeneraterItemDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 meta_setupFields(value0,beGeneraterPlayerData_fieldNames,beGeneraterPlayerData_fieldStorage,beGeneraterPlayerData_fieldOffsets,value1);
}
}
#pragma pop
