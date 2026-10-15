#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beActionStarterDataList_metaObject();
extern char lbl_804D2E8C[];
extern char lbl_804D2E90[];
extern char lbl_804D2E94[];
extern char lbl_804D2E98[];
extern void *beAsTargetModelData_meta;
}
extern "C" {
void beAsTargetModelData_fieldInit(){
 void *value0=beAsTargetModelData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D2E8C,1);
 void *value2=meta_field(value0,value1);
 void *value3=beActionStarterDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804D2E90,lbl_804D2E94,lbl_804D2E98,value1);
}
}
#pragma pop
