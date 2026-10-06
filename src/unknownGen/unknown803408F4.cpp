#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80340834();
void fn_80340880();
void fn_80340B0C();
extern char lbl_80454F10[];
extern char lbl_804E3998[];
extern char lbl_80536630[];
extern void *lbl_80536634;
void fn_8034091C();
void *fn_80340990();
}
extern "C" {
void fn_803408F4(){
 fn_80066188((int)fn_8034091C);
}
void fn_8034091C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536630,(int)fn_8002907C,(int)fn_80024180,(int)fn_80340990,(int)lbl_80454F10,20,(int)fn_80340880,0,0,(int)lbl_804E3998);
}
void *fn_80340990(){return fn_80340834();}
void *fn_803409B0(void *object){
 fn_80340B0C();
 return fn_8006546C(lbl_80536634,object);
}
void *fn_803409F0(){
 if(!lbl_80536634 || !(reinterpret_cast<unsigned int *>(lbl_80536634)[0x24/4]&4)) fn_80340B0C();
 return lbl_80536634;
}
}
#pragma pop
