#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80036C40();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D247C[];
extern char lbl_804D2480[];
extern char lbl_804D2484[];
extern char lbl_804D2488[];
extern void *lbl_80535460;
}
extern "C" {
void fn_802DCF94(){
 void *value0=lbl_80535460;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D247C,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80036C40();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_804D2480,lbl_804D2484,lbl_804D2488,value1);
}
}
#pragma pop
