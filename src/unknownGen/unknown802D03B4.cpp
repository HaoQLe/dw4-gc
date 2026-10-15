#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beMatCtrlInfoWork_metaObject();
extern char beMatCtrlInfoRam_fieldTypes[];
extern char beMatCtrlInfoRam_fieldNames[];
extern char beMatCtrlInfoRam_fieldStorage[];
extern char beMatCtrlInfoRam_fieldOffsets[];
extern void *beMatCtrlInfoRam_meta;
}
extern "C" {
void beMatCtrlInfoRam_fieldInit(){
 void *value0=beMatCtrlInfoRam_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beMatCtrlInfoRam_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=beMatCtrlInfoWork_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beMatCtrlInfoRam_fieldNames,beMatCtrlInfoRam_fieldStorage,beMatCtrlInfoRam_fieldOffsets,value1);
}
}
#pragma pop
