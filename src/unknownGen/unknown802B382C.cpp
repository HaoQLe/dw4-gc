#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_802B3A20();
extern char lbl_804CEE08[];
extern char lbl_804CEE0C[];
extern char lbl_804CEE10[];
extern char lbl_804CEE14[];
extern void *lbl_8053455C;
extern void *lbl_80534564;
extern void *lbl_805621F4;
void *fn_802B390C();
}
extern "C" {
void fn_802B382C(){
 void *value0=lbl_8053455C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CEE08,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802B390C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804CEE0C,lbl_804CEE10,lbl_804CEE14,value1);
}
void *fn_802B38CC(void *object){
 fn_802B3A20();
 return fn_8006546C(lbl_80534564,object);
}
void *fn_802B390C(){
 if(!lbl_80534564) lbl_80534564=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534564;
}
void *fn_802B3960(){
 if(!lbl_80534564 || !(reinterpret_cast<unsigned int *>(lbl_80534564)[0x24/4]&4)) fn_802B3A20();
 return lbl_80534564;
}
}
#pragma pop
