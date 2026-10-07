#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void *fn_801ACA90();
void fn_801ACACC();
void *fn_801ACED0();
void fn_801BF938();
extern char lbl_804ABB70[];
extern char lbl_804ABB9C[];
extern char lbl_80560138[8];
extern char lbl_80560140[8];
extern char lbl_80560148[8];
extern char lbl_80560150[8];
extern void *lbl_805621F4;
extern void *lbl_80564728;
extern void *lbl_80564734;
extern char lbl_80566CA4[4];
void fn_801ACC90();
void *fn_801ACD00();
void *fn_801ACD20();
void fn_801ACD28();
void *fn_801ACDE0();
void fn_801ACE1C();
void fn_801ACE44();
void *fn_801ACEB0();
}
extern "C" {
void fn_801ACC68(){
 fn_80066188((int)fn_801ACC90);
}
void fn_801ACC90(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564728,(int)fn_801ACE44,(int)fn_801ACD20,(int)fn_801ACD00,(int)lbl_804ABB70,64,(int)fn_801ACACC,(int)fn_801ACD28,0,0);
}
void *fn_801ACD00(){return fn_801ACA90();}
void *fn_801ACD20(){return lbl_80564734;}
void fn_801ACD28(){
 void *value0=lbl_80564728;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560138,2);
 void *value2=fn_800658E4(value0,value1);
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_80566CA4+0)));
 fn_800659C0(value0,lbl_80560140,lbl_80560148,lbl_80560150,value1);
}
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
