#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_80333E4C();
extern char lbl_804E1D98[];
extern char lbl_804E1DAC[];
extern char lbl_804E1DC0[];
extern char lbl_804E1DD4[];
extern void *lbl_80535EC0;
}
extern "C" {
void beNDMWStatusSubMenu_fieldInit(){
 void *value0=lbl_80535EC0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E1D98,5);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_80333E4C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value5=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value7=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 fn_800659C0(value0,lbl_804E1DAC,lbl_804E1DC0,lbl_804E1DD4,value1);
}
}
#pragma pop
