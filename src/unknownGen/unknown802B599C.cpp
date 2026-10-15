#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beTimerDataList_metaObject();
void *beSystem_metaObject();
void *bePadManager_metaObject();
void *beLua_metaObject();
extern char beTimer_fieldTypes[];
extern char beTimer_fieldNames[];
extern char beTimer_fieldStorage[];
extern char beTimer_fieldOffsets[];
extern void *beTimer_meta;
}
extern "C" {
void beTimer_fieldInit(){
 void *value0=beTimer_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beTimer_fieldTypes,5);
 void *value2=meta_field(value0,value1);
 void *value3=beSystem_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=bePadManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=beLua_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+60)=0;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value9=beTimerDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 meta_setupFields(value0,beTimer_fieldNames,beTimer_fieldStorage,beTimer_fieldOffsets,value1);
}
}
#pragma pop
