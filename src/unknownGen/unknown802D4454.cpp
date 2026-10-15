#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80036C40();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char lbl_804D1A60[];
extern char lbl_804D1A64[];
extern char lbl_804D1A68[];
extern char lbl_804D1A6C[];
extern void *beKeyboardReceiver_meta;
}
extern "C" {
void beKeyboardReceiver_fieldInit(){
 void *value0=beKeyboardReceiver_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D1A60,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80036C40();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_804D1A64,lbl_804D1A68,lbl_804D1A6C,value1);
}
}
#pragma pop
