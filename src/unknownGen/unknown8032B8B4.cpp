#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_8032BC90();
void *fn_8034365C();
extern char lbl_804E1AF4[];
extern char lbl_804E1B00[];
extern char lbl_804E1B0C[];
extern char lbl_804E1B18[];
extern void *lbl_80535DE8;
extern void *lbl_80535DF8;
}
extern "C" {
void fn_8032B8B4(){
 void *value0=lbl_80535DE8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E1AF4,3);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value3=fn_8034365C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804E1B00,lbl_804E1B0C,lbl_804E1B18,value1);
}
void *fn_8032B954(void *object){
 fn_8032BC90();
 return fn_8006546C(lbl_80535DF8,object);
}
void *fn_8032B994(){
 if(!lbl_80535DF8 || !(reinterpret_cast<unsigned int *>(lbl_80535DF8)[0x24/4]&4)) fn_8032BC90();
 return lbl_80535DF8;
}
}
#pragma pop
