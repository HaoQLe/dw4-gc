#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beSound_metaObject();
extern char beSeCtl_fieldTypes[];
extern char beSeCtl_fieldNames[];
extern char beSeCtl_fieldStorage[];
extern char beSeCtl_fieldOffsets[];
extern void *beSeCtl_meta;
}
extern "C" {
void beSeCtl_fieldInit(){
 void *value0=beSeCtl_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beSeCtl_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=beSound_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 meta_setupFields(value0,beSeCtl_fieldNames,beSeCtl_fieldStorage,beSeCtl_fieldOffsets,value1);
}
}
#pragma pop
