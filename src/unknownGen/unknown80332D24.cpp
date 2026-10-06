#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void *fn_80332910();
void *fn_80332BBC();
void fn_80332C08();
void fn_80332EE4();
void fn_80333F14();
extern char lbl_80453BB8[];
extern char lbl_80453BD0[];
extern char lbl_804E1F1C[];
extern char lbl_80535F38[];
extern void *lbl_80535F3C;
void fn_80332D4C();
void *fn_80332DB8();
void *fn_80332DD8();
void fn_80332E24();
void fn_80332E4C();
void *fn_80332EC4();
}
extern "C" {
void fn_80332D24(){
 fn_80066188((int)fn_80332D4C);
}
void fn_80332D4C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535F38,(int)fn_80332E4C,(int)fn_80332910,(int)fn_80332DB8,(int)lbl_80453BB8,124,(int)fn_80332C08,0,0,0);
}
void *fn_80332DB8(){return fn_80332BBC();}
void *fn_80332DD8(){
 if(!lbl_80535F3C || !(reinterpret_cast<unsigned int *>(lbl_80535F3C)[0x24/4]&4)) fn_80332E24();
 return lbl_80535F3C;
}
void fn_80332E24(){
 fn_80066188((int)fn_80332E4C);
}
void fn_80332E4C(){
 fn_803250AC();
 fn_80066204(1,(int)&lbl_80535F3C,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_80332EC4,(int)lbl_80453BD0,124,0,(int)fn_80332EE4,0,(int)lbl_804E1F1C);
}
void *fn_80332EC4(){return fn_80332DD8();}
}
#pragma pop
