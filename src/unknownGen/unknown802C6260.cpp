#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004D4BC(void *,float);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_800BB61C();
extern char lbl_8041D5B0[];
extern char lbl_804D06F0[];
extern char lbl_804D0700[];
extern char lbl_804D0710[];
extern char lbl_804D0720[];
extern void *lbl_80534C50;
}
extern "C" {
void beModelCtrlNode2_fieldInit(){
 void *value0=lbl_80534C50;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D06F0,4);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_8041D5B0+0)));
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value4=fn_800BB61C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+52)=1;
 fn_800659C0(value0,lbl_804D0700,lbl_804D0710,lbl_804D0720,value1);
}
}
#pragma pop
