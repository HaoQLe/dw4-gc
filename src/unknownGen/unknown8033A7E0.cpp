#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80028F84();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_80403C88();
extern char lbl_804E2A1C[];
extern char lbl_804E2A24[];
extern char lbl_804E2A2C[];
extern char lbl_804E2A34[];
extern void *lbl_805361F8;
}
extern "C" {
void beNDMWMdlItem_fieldInit(){
 void *value0=lbl_805361F8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E2A1C,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80403C88();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_80028F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 fn_800659C0(value0,lbl_804E2A24,lbl_804E2A2C,lbl_804E2A34,value1);
}
}
#pragma pop
