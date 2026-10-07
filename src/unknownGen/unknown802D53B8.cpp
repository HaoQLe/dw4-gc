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
void fn_802D5648();
extern char lbl_804D1B4C[];
extern char lbl_804D1B50[];
extern char lbl_804D1B54[];
extern char lbl_804D1B58[];
extern void *lbl_805351DC;
extern void *lbl_805351E4;
extern void *lbl_805621F4;
void *fn_802D5498();
}
extern "C" {
void fn_802D53B8(){
 void *value0=lbl_805351DC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D1B4C,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802D5498();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804D1B50,lbl_804D1B54,lbl_804D1B58,value1);
}
void *fn_802D5458(void *object){
 fn_802D5648();
 return fn_8006546C(lbl_805351E4,object);
}
void *fn_802D5498(){
 if(!lbl_805351E4) lbl_805351E4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805351E4;
}
void *fn_802D54EC(){
 if(!lbl_805351E4 || !(reinterpret_cast<unsigned int *>(lbl_805351E4)[0x24/4]&4)) fn_802D5648();
 return lbl_805351E4;
}
}
#pragma pop
