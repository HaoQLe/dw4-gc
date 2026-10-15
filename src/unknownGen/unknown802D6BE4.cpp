#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beBaseInfoRamList_metaObject();
extern char beGeneraterInfoWork_fieldTypes[];
extern char beGeneraterInfoWork_fieldNames[];
extern char beGeneraterInfoWork_fieldStorage[];
extern char beGeneraterInfoWork_fieldOffsets[];
extern void *beGeneraterInfoWork_meta;
}
extern "C" {
void beGeneraterInfoWork_fieldInit(){
 void *value0=beGeneraterInfoWork_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beGeneraterInfoWork_fieldTypes,9);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value3=beBaseInfoRamList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beGeneraterInfoWork_fieldNames,beGeneraterInfoWork_fieldStorage,beGeneraterInfoWork_fieldOffsets,value1);
}
}
#pragma pop
