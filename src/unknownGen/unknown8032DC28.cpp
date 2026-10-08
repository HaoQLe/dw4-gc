#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80033E74();
void *fn_800365B4();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804E1C1C[];
extern char lbl_804E1C38[];
extern char lbl_804E1C54[];
extern char lbl_804E1C70[];
extern void *lbl_80535E44;
}
extern "C" {
void fn_8032DC28(){
 void *value0=lbl_80535E44;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E1C1C,7);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_80033E74();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 fn_800659C0(value0,lbl_804E1C38,lbl_804E1C54,lbl_804E1C70,value1);
}
}
#pragma pop
