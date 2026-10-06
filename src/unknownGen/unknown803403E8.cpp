#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80340328();
void fn_80340374();
void fn_80340654();
extern char lbl_80454EB0[];
extern char lbl_804E3954[];
extern char lbl_8053661C[];
extern void *lbl_80536620;
extern void *lbl_805621F4;
void fn_80340410();
void *fn_80340484();
}
extern "C" {
void fn_803403E8(){
 fn_80066188((int)fn_80340410);
}
void fn_80340410(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_8053661C,(int)fn_8002907C,(int)fn_80024180,(int)fn_80340484,(int)lbl_80454EB0,20,(int)fn_80340374,0,0,(int)lbl_804E3954);
}
void *fn_80340484(){return fn_80340328();}
void *fn_803404A4(void *object){
 fn_80340654();
 return fn_8006546C(lbl_80536620,object);
}
void *fn_803404E4(){
 if(!lbl_80536620) lbl_80536620=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536620;
}
void *fn_80340538(){
 if(!lbl_80536620 || !(reinterpret_cast<unsigned int *>(lbl_80536620)[0x24/4]&4)) fn_80340654();
 return lbl_80536620;
}
}
#pragma pop
