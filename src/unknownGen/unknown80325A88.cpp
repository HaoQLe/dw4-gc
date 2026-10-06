#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_803250AC();
void *fn_803259C8();
void fn_80325A14();
void fn_80325D04();
extern char lbl_804531BC[];
extern char lbl_80453220[];
extern char lbl_80453228[];
extern char lbl_804E16A8[];
extern char lbl_804E16B0[];
extern char lbl_804E16DC[];
extern char lbl_804E1708[];
extern char lbl_80535C78[];
extern void *lbl_80535C7C;
extern void *lbl_80535C80;
extern void *lbl_805621F4;
void fn_80325AB0();
void *fn_80325B24();
void *fn_80325BF8();
void fn_80325C44();
void fn_80325C6C();
void *fn_80325CE4();
}
extern "C" {
void fn_80325A88(){
 fn_80066188((int)fn_80325AB0);
}
void fn_80325AB0(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535C78,(int)fn_8002907C,(int)fn_80024180,(int)fn_80325B24,(int)lbl_804531BC,20,(int)fn_80325A14,0,0,(int)lbl_804E16A8);
}
void *fn_80325B24(){return fn_803259C8();}
void *fn_80325B44(){
 if(!lbl_80535C7C) lbl_80535C7C=fn_800635C8(lbl_80453220,lbl_804E16B0,lbl_804E16DC,0xB);
 return lbl_80535C7C;
}
void *fn_80325BA4(){
 if(!lbl_80535C80) lbl_80535C80=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535C80;
}
void *fn_80325BF8(){
 if(!lbl_80535C80 || !(reinterpret_cast<unsigned int *>(lbl_80535C80)[0x24/4]&4)) fn_80325C44();
 return lbl_80535C80;
}
void fn_80325C44(){
 fn_80066188((int)fn_80325C6C);
}
void fn_80325C6C(){
 fn_803250AC();
 fn_80066204(1,(int)&lbl_80535C80,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80325CE4,(int)lbl_80453228,80,0,(int)fn_80325D04,0,(int)lbl_804E1708);
}
void *fn_80325CE4(){return fn_80325BF8();}
}
#pragma pop
