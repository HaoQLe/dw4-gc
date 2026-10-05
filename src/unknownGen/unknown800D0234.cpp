#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_80037510();
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void fn_800D0450();
extern char lbl_80488A38[];
extern char lbl_80488A48[];
extern void *lbl_80561DF8;
extern void *lbl_805621F4;
extern void *lbl_80562E10;
extern void *lbl_80562E14;
void *fn_800D0234();
void fn_800D0270();
void fn_800D0298();
void *fn_800D02FC();
void *fn_800D031C();
void *fn_800D0360();
void fn_800D039C();
void fn_800D03C4();
void *fn_800D0430();
}
extern "C" {
void *fn_800D0234(){
 if(!lbl_80562E10 || !(reinterpret_cast<unsigned int *>(lbl_80562E10)[0x24/4]&4)) fn_800D0270();
 return lbl_80562E10;
}
void fn_800D0270(){
 fn_80066188((int)fn_800D0298);
}
void fn_800D0298(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562E10,(int)fn_80037510,(int)fn_800D031C,(int)fn_800D02FC,(int)lbl_80488A38,20,0,0,0,0);
}
void *fn_800D02FC(){return fn_800D0234();}
void *fn_800D031C(){return lbl_80561DF8;}
void *fn_800D0324(){
 if(!lbl_80562E14) lbl_80562E14=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562E14;
}
void *fn_800D0360(){
 if(!lbl_80562E14 || !(reinterpret_cast<unsigned int *>(lbl_80562E14)[0x24/4]&4)) fn_800D039C();
 return lbl_80562E14;
}
void fn_800D039C(){
 fn_80066188((int)fn_800D03C4);
}
void fn_800D03C4(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562E14,(int)fn_80037510,(int)fn_800D031C,(int)fn_800D0430,(int)lbl_80488A48,20,0,(int)fn_800D0450,0,0);
}
void *fn_800D0430(){return fn_800D0360();}
}
#pragma pop
