#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053650(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char lbl_804D0648[];
extern char lbl_804D0664[];
extern char lbl_804D0680[];
extern char lbl_804D069C[];
extern void *beModelCtrlSCEffect_meta;
}
extern "C" {
void beModelCtrlSCEffect_fieldInit(){
 void *value0=beModelCtrlSCEffect_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D0648,7);
 void *value2=meta_field(value0,value1);
 fn_80053650(value2,-1);
 meta_setupFields(value0,lbl_804D0664,lbl_804D0680,lbl_804D069C,value1);
}
}
#pragma pop
