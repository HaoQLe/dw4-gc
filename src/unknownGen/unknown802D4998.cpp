#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80028F84();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_801ADB98();
extern char lbl_804D1A7C[];
extern char lbl_804D1A8C[];
extern char lbl_804D1A9C[];
extern char lbl_804D1AAC[];
extern void *lbl_805351AC;
}
extern "C" {
void fn_802D4998(){
 void *value0=lbl_805351AC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D1A7C,4);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_80028F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 fn_800659C0(value0,lbl_804D1A8C,lbl_804D1A9C,lbl_804D1AAC,value1);
}
}
#pragma pop
