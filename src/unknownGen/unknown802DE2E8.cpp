#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beDataBase_metaObject();
extern char beDBManagerInfo_fieldTypes[];
extern char beDBManagerInfo_fieldNames[];
extern char beDBManagerInfo_fieldStorage[];
extern char beDBManagerInfo_fieldOffsets[];
extern void *beDBManagerInfo_meta;
}
extern "C" {
void beDBManagerInfo_fieldInit(){
 void *value0=beDBManagerInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beDBManagerInfo_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=beDataBase_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beDBManagerInfo_fieldNames,beDBManagerInfo_fieldStorage,beDBManagerInfo_fieldOffsets,value1);
}
}
#pragma pop
