#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801ADB98();
extern char lbl_804CF438[];
extern char lbl_804CF43C[];
extern char lbl_804CF440[];
extern char lbl_804CF444[];
extern void *beSwitchCtrlInfo_meta;
}
extern "C" {
void beSwitchCtrlInfo_fieldInit(){
 void *value0=beSwitchCtrlInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804CF438,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804CF43C,lbl_804CF440,lbl_804CF444,value1);
}
}
#pragma pop
