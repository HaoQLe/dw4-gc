#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80326F88();
void *fn_8032806C();
void fn_803280B8();
void fn_80328720();
extern char lbl_804534EC[];
extern char lbl_80535D58[];
void fn_803282E0();
void *fn_8032834C();
}
extern "C" {
void fn_803282B8(){
 fn_80066188((int)fn_803282E0);
}
void fn_803282E0(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D58,(int)fn_80328720,(int)fn_80326F88,(int)fn_8032834C,(int)lbl_804534EC,80,(int)fn_803280B8,0,0,0);
}
void *fn_8032834C(){return fn_8032806C();}
}
#pragma pop
