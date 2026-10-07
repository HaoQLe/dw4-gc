#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029A5C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_801B7354();
void fn_802B3048();
extern char lbl_804CEDA0[];
extern char lbl_804CEDAC[];
extern char lbl_804CEDB8[];
extern char lbl_804CEDC4[];
extern void *lbl_8053453C;
extern void *lbl_8053454C;
extern void *lbl_805621F4;
void *fn_802B2F34();
}
extern "C" {
void fn_802B2E4C(){
 void *value0=lbl_8053453C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CEDA0,3);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801B7354();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_80029A5C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_802B2F34();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 fn_800659C0(value0,lbl_804CEDAC,lbl_804CEDB8,lbl_804CEDC4,value1);
}
void *fn_802B2F34(){
 if(!lbl_8053454C) lbl_8053454C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053454C;
}
void *fn_802B2F88(){
 if(!lbl_8053454C || !(reinterpret_cast<unsigned int *>(lbl_8053454C)[0x24/4]&4)) fn_802B3048();
 return lbl_8053454C;
}
}
#pragma pop
