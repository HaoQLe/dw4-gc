#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80028BFC();
void *fn_8002DFE4();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_8055D3A4[8];
extern char lbl_8055D3AC[8];
extern char lbl_8055D3B4[8];
extern char lbl_8055D3BC[8];
extern void *lbl_805619D4;
}
extern "C" {
void *fn_8002E0E8(){return fn_8002DFE4();}
void fn_8002E108(){
 void *value0=lbl_805619D4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055D3A4,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80028BFC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+60)=value3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=(void *)64;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+53)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+64)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+65)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+66)=0;
 fn_800659C0(value0,lbl_8055D3AC,lbl_8055D3B4,lbl_8055D3BC,value1);
}
}
#pragma pop
