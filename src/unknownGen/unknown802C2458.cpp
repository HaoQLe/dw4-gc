#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802B740C();
void *fn_802C2538();
void *fn_802D4258();
extern char lbl_804D0158[];
extern char lbl_804D016C[];
extern char lbl_804D0180[];
extern char lbl_804D0194[];
extern void *lbl_80534AAC;
}
extern "C" {
void bePadManager_fieldInit(){
 void *value0=lbl_80534AAC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D0158,5);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802B740C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802C2538();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_802D4258();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 fn_800659C0(value0,lbl_804D016C,lbl_804D0180,lbl_804D0194,value1);
}
}
#pragma pop
