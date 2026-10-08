#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003EC68(void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_803404E4();
extern char lbl_804E37EC[];
extern char lbl_804E3824[];
extern char lbl_804E385C[];
extern char lbl_804E3894[];
extern void *lbl_805365AC;
}
extern "C" {
void fn_8033F890(){
 void *value0=lbl_805365AC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E37EC,14);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 fn_8003EC68(value2,1);
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 fn_8003EC68(value3,1);
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+8));
 void *value5=fn_803404E4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 fn_800659C0(value0,lbl_804E3824,lbl_804E385C,lbl_804E3894,value1);
}
}
#pragma pop
