#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802C2174();
void fn_803393C0();
void *fn_803442B4();
void *fn_80403C88();
extern char lbl_804E2780[];
extern char lbl_804E278C[];
extern char lbl_804E2798[];
extern char lbl_804E27A4[];
extern void *lbl_80536178;
extern void *lbl_80536188;
extern void *lbl_805621F4;
}
extern "C" {
void beNDMWMdlPlayer_fieldInit(){
 void *value0=lbl_80536178;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E2780,3);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80403C88();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802C2174();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_803442B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+60)=0;
 fn_800659C0(value0,lbl_804E278C,lbl_804E2798,lbl_804E27A4,value1);
}
void *fn_80338F60(void *object){
 fn_803393C0();
 return fn_8006546C(lbl_80536188,object);
}
void *fn_80338FA0(){
 if(!lbl_80536188) lbl_80536188=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536188;
}
void *beNDMWMdlPlayerInfoWork_getMeta(){
 if(!lbl_80536188 || !(reinterpret_cast<unsigned int *>(lbl_80536188)[0x24/4]&4)) fn_803393C0();
 return lbl_80536188;
}
}
#pragma pop
