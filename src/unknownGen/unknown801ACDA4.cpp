#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void fn_801ACED0();
void fn_801BF938();
extern char lbl_804ABB9C[];
extern void *lbl_805621F4;
extern void *lbl_80564734;
void *fn_801ACDE0();
void fn_801ACE1C();
void fn_801ACE44();
void *fn_801ACEB0();
}
extern "C" {
void *fn_801ACDA4(){
 if(!lbl_80564734) lbl_80564734=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564734;
}
void *fn_801ACDE0(){
 if(!lbl_80564734 || !(reinterpret_cast<unsigned int *>(lbl_80564734)[0x24/4]&4)) fn_801ACE1C();
 return lbl_80564734;
}
void fn_801ACE1C(){
 fn_80066188((int)fn_801ACE44);
}
void fn_801ACE44(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_80564734,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801ACEB0,(int)lbl_804ABB9C,48,0,(int)fn_801ACED0,0,0);
}
void *fn_801ACEB0(){return fn_801ACDE0();}
}
#pragma pop
