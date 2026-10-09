#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E1EFC[];
extern char lbl_804E1F00[];
extern char lbl_804E1F04[];
extern char lbl_804E1F08[];
extern void *lbl_80535F20;
}
extern "C" {
void beNDMWStatusCtrlFlag_fieldInit(){
 void *value0=lbl_80535F20;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E1EFC,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_804E1F00,lbl_804E1F04,lbl_804E1F08,value1);
}
}
#pragma pop
