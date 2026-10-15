#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char lbl_804E1E74[];
extern char lbl_804E1E78[];
extern char lbl_804E1E7C[];
extern char lbl_804E1E80[];
extern void *beNDMWStatusCtrlBit_meta;
}
extern "C" {
void beNDMWStatusCtrlBit_fieldInit(){
 void *value0=beNDMWStatusCtrlBit_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E1E74,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_804E1E78,lbl_804E1E7C,lbl_804E1E80,value1);
}
}
#pragma pop
