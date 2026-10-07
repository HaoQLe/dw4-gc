#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_801BFC74();
void *fn_801C5E38();
void *fn_80285EDC();
void fn_802E19D8();
extern char lbl_804D2990[];
extern char lbl_804D29B0[];
extern char lbl_804D29D0[];
extern char lbl_804D29F0[];
extern void *lbl_805355E0;
extern void *lbl_80535604;
}
extern "C" {
void fn_802E171C(){
 void *value0=lbl_805355E0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D2990,8);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801BFC74();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_801C5E38();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_80285EDC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+60)=0;
 fn_800659C0(value0,lbl_804D29B0,lbl_804D29D0,lbl_804D29F0,value1);
}
void *fn_802E17F4(){
 if(!lbl_80535604 || !(reinterpret_cast<unsigned int *>(lbl_80535604)[0x24/4]&4)) fn_802E19D8();
 return lbl_80535604;
}
}
#pragma pop
