#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beLua_metaObject();
extern char beGenerater_fieldTypes[];
extern char beGenerater_fieldNames[];
extern char beGenerater_fieldStorage[];
extern char beGenerater_fieldOffsets[];
extern void *beGenerater_meta;
}
extern "C" {
void beGenerater_fieldInit(){
 void *value0=beGenerater_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beGenerater_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 void *value3=beLua_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 meta_setupFields(value0,beGenerater_fieldNames,beGenerater_fieldStorage,beGenerater_fieldOffsets,value1);
}
}
#pragma pop
