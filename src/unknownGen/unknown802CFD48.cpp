#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802C2174();
void *fn_802CDF04();
extern char lbl_804D15F8[];
extern char lbl_804D160C[];
extern char lbl_804D1620[];
extern char lbl_804D1634[];
extern void *lbl_80535068;
}
extern "C" {
void fn_802CFD48(){
 void *value0=lbl_80535068;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D15F8,5);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802CDF04();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802C2174();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 fn_800659C0(value0,lbl_804D160C,lbl_804D1620,lbl_804D1634,value1);
}
}
#pragma pop
