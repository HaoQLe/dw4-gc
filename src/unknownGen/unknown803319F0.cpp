#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_80342A3C();
void *fn_8034365C();
extern char lbl_804E1E94[];
extern char lbl_804E1EAC[];
extern char lbl_804E1EC4[];
extern char lbl_804E1EDC[];
extern void *lbl_80535F04;
}
extern "C" {
void fn_803319F0(){
 void *value0=lbl_80535F04;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E1E94,6);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value5=fn_8034365C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value7=fn_80342A3C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 fn_800659C0(value0,lbl_804E1EAC,lbl_804E1EC4,lbl_804E1EDC,value1);
}
}
#pragma pop
