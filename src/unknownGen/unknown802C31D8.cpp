#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004D4BC(void *,float);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801C010C();
void *beNumberCtrlInfoWork_metaObject();
void *beNumVerDataList_metaObject();
extern char lbl_8041E768[];
extern char beNumberCtrlInfoRam_fieldTypes[];
extern char beNumberCtrlInfoRam_fieldNames[];
extern char beNumberCtrlInfoRam_fieldStorage[];
extern char beNumberCtrlInfoRam_fieldOffsets[];
extern void *beNumberCtrlInfoRam_meta;
}
extern "C" {
void beNumberCtrlInfoRam_fieldInit(){
 void *value0=beNumberCtrlInfoRam_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNumberCtrlInfoRam_fieldTypes,6);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801C010C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8004D4BC(value4,*reinterpret_cast<float *>((lbl_8041E768+0)));
 void *value5=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value6=beNumVerDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+56)=value6;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value5)+52)=1;
 void *value7=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 void *value8=beNumberCtrlInfoWork_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value7)+56)=value8;
 meta_setupFields(value0,beNumberCtrlInfoRam_fieldNames,beNumberCtrlInfoRam_fieldStorage,beNumberCtrlInfoRam_fieldOffsets,value1);
}
}
#pragma pop
