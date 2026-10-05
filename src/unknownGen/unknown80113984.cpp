#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void *fn_801138D0();
void fn_8011390C();
void fn_80113B1C();
void fn_80113B44();
extern char lbl_80495528[];
extern void *lbl_805621F4;
extern void *lbl_805637F4;
extern void *lbl_805637F8;
void fn_801139AC();
void *fn_80113A14();
void *fn_80113A34();
}
extern "C" {
void fn_80113984(){
 fn_80066188((int)fn_801139AC);
}
void fn_801139AC(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805637F4,(int)fn_80113B44,(int)fn_80113A34,(int)fn_80113A14,(int)lbl_80495528,88,(int)fn_8011390C,0,0,0);
}
void *fn_80113A14(){return fn_801138D0();}
void *fn_80113A34(){return lbl_805637F8;}
void *fn_80113A3C(){
 if(!lbl_805637F8) lbl_805637F8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805637F8;
}
void *fn_80113A78(){
 if(!lbl_805637F8 || !(reinterpret_cast<unsigned int *>(lbl_805637F8)[0x24/4]&4)) fn_80113B1C();
 return lbl_805637F8;
}
}
#pragma pop
