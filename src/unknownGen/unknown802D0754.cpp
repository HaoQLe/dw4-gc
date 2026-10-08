#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_801ADB98();
void *fn_802D0834();
void *fn_802D0CC0();
extern char lbl_804D169C[];
extern char lbl_804D16A8[];
extern char lbl_804D16B4[];
extern char lbl_804D16C0[];
extern void *lbl_80535094;
}
extern "C" {
void fn_802D0754(){
 void *value0=lbl_80535094;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D169C,3);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802D0CC0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_802D0834();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 fn_800659C0(value0,lbl_804D16A8,lbl_804D16B4,lbl_804D16C0,value1);
}
}
#pragma pop
