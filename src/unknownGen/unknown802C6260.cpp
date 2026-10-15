#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004D4BC(void *,float);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_800BB61C();
extern char lbl_8041D5B0[];
extern char lbl_804D06F0[];
extern char lbl_804D0700[];
extern char lbl_804D0710[];
extern char lbl_804D0720[];
extern void *beModelCtrlNode2_meta;
}
extern "C" {
void beModelCtrlNode2_fieldInit(){
 void *value0=beModelCtrlNode2_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D06F0,4);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_8041D5B0+0)));
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value4=fn_800BB61C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+52)=1;
 meta_setupFields(value0,lbl_804D0700,lbl_804D0710,lbl_804D0720,value1);
}
}
#pragma pop
