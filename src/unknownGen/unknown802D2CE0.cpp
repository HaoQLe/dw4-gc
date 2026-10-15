#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *igLightSetList_metaObject();
extern char beLightCtrlInfo_fieldTypes[];
extern char beLightCtrlInfo_fieldNames[];
extern char beLightCtrlInfo_fieldStorage[];
extern char beLightCtrlInfo_fieldOffsets[];
extern void *beLightCtrlInfo_meta;
}
extern "C" {
void beLightCtrlInfo_fieldInit(){
 void *value0=beLightCtrlInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beLightCtrlInfo_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=igLightSetList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beLightCtrlInfo_fieldNames,beLightCtrlInfo_fieldStorage,beLightCtrlInfo_fieldOffsets,value1);
}
}
#pragma pop
