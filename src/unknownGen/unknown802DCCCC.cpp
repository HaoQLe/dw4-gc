#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80071694(void *,int);
extern char lbl_804D2464[];
extern char lbl_804D2468[];
extern char lbl_804D246C[];
extern char lbl_804D2470[];
extern void *beDataObjString_meta;
}
extern "C" {
void beDataObjString_fieldInit(){
 void *value0=beDataObjString_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D2464,1);
 void *value2=meta_field(value0,value1);
 fn_80071694(value2,0);
 meta_setupFields(value0,lbl_804D2468,lbl_804D246C,lbl_804D2470,value1);
}
}
#pragma pop
