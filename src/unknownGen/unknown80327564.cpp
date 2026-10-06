#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80326F88();
void *fn_80327318();
void fn_80327364();
void fn_803278A4();
void fn_80328720();
extern char lbl_8045349C[];
extern char lbl_80535D48[];
extern void *lbl_80535D4C;
void fn_8032758C();
void *fn_803275F8();
}
extern "C" {
void fn_80327564(){
 fn_80066188((int)fn_8032758C);
}
void fn_8032758C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D48,(int)fn_80328720,(int)fn_80326F88,(int)fn_803275F8,(int)lbl_8045349C,80,(int)fn_80327364,0,0,0);
}
void *fn_803275F8(){return fn_80327318();}
void *fn_80327618(void *object){
 fn_803278A4();
 return fn_8006546C(lbl_80535D4C,object);
}
void *fn_80327658(){
 if(!lbl_80535D4C || !(reinterpret_cast<unsigned int *>(lbl_80535D4C)[0x24/4]&4)) fn_803278A4();
 return lbl_80535D4C;
}
}
#pragma pop
