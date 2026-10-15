#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053650(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beModelCtrlSCEffect_fieldTypes[];
extern char beModelCtrlSCEffect_fieldNames[];
extern char beModelCtrlSCEffect_fieldStorage[];
extern char beModelCtrlSCEffect_fieldOffsets[];
extern void *beModelCtrlSCEffect_meta;
}
extern "C" {
void beModelCtrlSCEffect_fieldInit(){
 void *value0=beModelCtrlSCEffect_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beModelCtrlSCEffect_fieldTypes,7);
 void *value2=meta_field(value0,value1);
 fn_80053650(value2,-1);
 meta_setupFields(value0,beModelCtrlSCEffect_fieldNames,beModelCtrlSCEffect_fieldStorage,beModelCtrlSCEffect_fieldOffsets,value1);
}
}
#pragma pop
