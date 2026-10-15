#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80030000();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char lbl_804D22D0[];
extern char lbl_804D22D4[];
extern char lbl_804D22D8[];
extern char lbl_804D22DC[];
extern void *beFileChkObj_meta;
}
extern "C" {
void beFileChkObj_fieldInit(){
 void *value0=beFileChkObj_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D22D0,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80030000();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_804D22D4,lbl_804D22D8,lbl_804D22DC,value1);
}
}
#pragma pop
