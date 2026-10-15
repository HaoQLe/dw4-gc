#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053650(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char lbl_804D0350[];
extern char lbl_804D035C[];
extern char lbl_804D0368[];
extern char lbl_804D0374[];
extern void *beNumberCtrlInfoWork_meta;
}
extern "C" {
void beNumberCtrlInfoWork_fieldInit(){
 void *value0=beNumberCtrlInfoWork_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D0350,3);
 void *value2=meta_field(value0,value1);
 fn_80053650(value2,-1);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80053650(value3,-1);
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 fn_80053650(value4,-1);
 meta_setupFields(value0,lbl_804D035C,lbl_804D0368,lbl_804D0374,value1);
}
}
#pragma pop
