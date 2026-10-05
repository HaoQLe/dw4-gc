#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_80332910();
void *fn_80332BBC();
void fn_80332C08();
void fn_80332E4C();
extern char lbl_80453BB8[];
extern char lbl_80535F38[];
void fn_80332D4C();
void *fn_80332DB8();
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
}
#pragma pop
