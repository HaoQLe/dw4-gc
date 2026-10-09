#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_801ADB98();
void *fn_802D6510();
extern char lbl_804CFFF0[];
extern char lbl_804CFFF8[];
extern char lbl_804D0000[];
extern char lbl_804D0008[];
extern void *lbl_80534A5C;
}
extern "C" {
void bePoint01Info_fieldInit(){
 void *value0=lbl_80534A5C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CFFF0,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802D6510();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 fn_800659C0(value0,lbl_804CFFF8,lbl_804D0000,lbl_804D0008,value1);
}
}
#pragma pop
