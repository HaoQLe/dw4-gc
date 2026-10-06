#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803425BC();
void *fn_80342CAC();
void fn_80342CF8();
void fn_80342EE8();
void fn_803438F4();
extern char lbl_80455160[];
extern char lbl_80536744[];
extern void *lbl_80536748;
void fn_80342D74();
void *fn_80342DE0();
}
extern "C" {
void fn_80342D4C(){
 fn_80066188((int)fn_80342D74);
}
void fn_80342D74(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536744,(int)fn_803438F4,(int)fn_803425BC,(int)fn_80342DE0,(int)lbl_80455160,20,(int)fn_80342CF8,0,0,0);
}
void *fn_80342DE0(){return fn_80342CAC();}
void *fn_80342E00(void *object){
 fn_80342EE8();
 return fn_8006546C(lbl_80536748,object);
}
void *fn_80342E40(){
 if(!lbl_80536748 || !(reinterpret_cast<unsigned int *>(lbl_80536748)[0x24/4]&4)) fn_80342EE8();
 return lbl_80536748;
}
}
#pragma pop
