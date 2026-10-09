#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802CA748();
extern char lbl_804D0E4C[];
extern char lbl_804D0E74[];
extern char lbl_804D0E9C[];
extern char lbl_804D0EC4[];
extern void *lbl_80534E70;
}
extern "C" {
void beModelCtrlAIMap_fieldInit(){
 void *value0=lbl_80534E70;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D0E4C,10);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value3=fn_802CA748();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 void *value5=fn_802CA748();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+6));
 void *value7=fn_802CA748();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+7));
 void *value9=fn_802CA748();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 fn_800659C0(value0,lbl_804D0E74,lbl_804D0E9C,lbl_804D0EC4,value1);
}
}
#pragma pop
