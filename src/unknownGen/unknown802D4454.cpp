#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80036C40();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804D1A60[];
extern char lbl_804D1A64[];
extern char lbl_804D1A68[];
extern char lbl_804D1A6C[];
extern void *lbl_805351A0;
}
extern "C" {
void beKeyboardReceiver_fieldInit(){
 void *value0=lbl_805351A0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D1A60,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80036C40();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_804D1A64,lbl_804D1A68,lbl_804D1A6C,value1);
}
}
#pragma pop
