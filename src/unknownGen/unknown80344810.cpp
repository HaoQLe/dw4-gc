#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802DBE2C();
void *fn_802DC03C();
void *fn_802DD9B0();
extern char lbl_804E40A8[];
extern char lbl_804E40D4[];
extern char lbl_804E4100[];
extern char lbl_804E412C[];
extern void *lbl_805367F0;
}
extern "C" {
void beNDMWGameRam_fieldInit(){
 void *value0=lbl_805367F0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E40A8,11);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802DD9B0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802DD9B0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_802DD9B0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value9=fn_802DD9B0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 void *value10=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value11=fn_802DD9B0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 void *value12=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 void *value13=fn_802DD9B0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+56)=value13;
 void *value14=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+6));
 void *value15=fn_802DD9B0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value14)+56)=value15;
 void *value16=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+7));
 void *value17=fn_802DD9B0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value16)+56)=value17;
 void *value18=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+8));
 void *value19=fn_802DC03C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value18)+56)=value19;
 void *value20=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+9));
 void *value21=fn_802DBE2C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value20)+56)=value21;
 fn_800659C0(value0,lbl_804E40D4,lbl_804E4100,lbl_804E412C,value1);
}
}
#pragma pop
