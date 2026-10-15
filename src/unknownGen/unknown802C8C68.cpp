#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80071694(void *,int);
extern char beModelCtrlInfo_fieldTypes[];
extern char beModelCtrlInfo_fieldNames[];
extern char beModelCtrlInfo_fieldStorage[];
extern char beModelCtrlInfo_fieldOffsets[];
extern void *beModelCtrlInfo_meta;
}
extern "C" {
void beModelCtrlInfo_fieldInit(){
 void *value0=beModelCtrlInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beModelCtrlInfo_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 fn_80071694(value2,0);
 meta_setupFields(value0,beModelCtrlInfo_fieldNames,beModelCtrlInfo_fieldStorage,beModelCtrlInfo_fieldOffsets,value1);
}
}
#pragma pop
