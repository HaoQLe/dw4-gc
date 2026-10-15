#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beCameraCtrlInfo_fieldTypes[];
extern char beCameraCtrlInfo_fieldNames[];
extern char beCameraCtrlInfo_fieldStorage[];
extern char beCameraCtrlInfo_fieldOffsets[];
extern void *beCameraCtrlInfo_meta;
extern void *igObject_meta;
}
extern "C" {
void beCameraCtrlInfo_fieldInit(){
 void *value0=beCameraCtrlInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beCameraCtrlInfo_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=igObject_meta;
 meta_setupFields(value0,beCameraCtrlInfo_fieldNames,beCameraCtrlInfo_fieldStorage,beCameraCtrlInfo_fieldOffsets,value1);
}
}
#pragma pop
