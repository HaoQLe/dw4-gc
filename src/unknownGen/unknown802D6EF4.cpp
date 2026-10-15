#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beGeneraterInfoWork_metaObject();
extern char beGeneraterInfoRam_fieldTypes[];
extern char beGeneraterInfoRam_fieldNames[];
extern char beGeneraterInfoRam_fieldStorage[];
extern char beGeneraterInfoRam_fieldOffsets[];
extern void *beGeneraterInfoRam_meta;
}
extern "C" {
void beGeneraterInfoRam_fieldInit(){
 void *value0=beGeneraterInfoRam_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beGeneraterInfoRam_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=beGeneraterInfoWork_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beGeneraterInfoRam_fieldNames,beGeneraterInfoRam_fieldStorage,beGeneraterInfoRam_fieldOffsets,value1);
}
}
#pragma pop
