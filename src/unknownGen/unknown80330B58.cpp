#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_80343A04();
extern char lbl_804E1DF4[];
extern char lbl_804E1E00[];
extern char lbl_804E1E0C[];
extern char lbl_804E1E18[];
extern void *lbl_80535ED8;
}
extern "C" {
void beNDMWStatusCtrlSkill_fieldInit(){
 void *value0=lbl_80535ED8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E1DF4,3);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_80343A04();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value5=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 fn_800659C0(value0,lbl_804E1E00,lbl_804E1E0C,lbl_804E1E18,value1);
}
}
#pragma pop
