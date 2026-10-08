#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802CE3D4();
void *fn_802CE92C();
void *fn_802CEE98();
void *fn_802CF3B0();
void *fn_802CF5C0();
extern char lbl_804D1364[];
extern char lbl_804D1384[];
extern char lbl_804D13A4[];
extern char lbl_804D13C4[];
extern void *lbl_80534FBC;
}
extern "C" {
void fn_802CE2B4(){
 void *value0=lbl_80534FBC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D1364,8);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802CF5C0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802CE92C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_802CE3D4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value9=fn_802CEE98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 void *value10=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value11=fn_802CF3B0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+56)=value11;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value10)+52)=1;
 fn_800659C0(value0,lbl_804D1384,lbl_804D13A4,lbl_804D13C4,value1);
}
}
#pragma pop
