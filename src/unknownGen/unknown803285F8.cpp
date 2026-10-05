#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_80326F88();
void *fn_803283AC();
void fn_803283F8();
void fn_80328720();
extern char lbl_80453500[];
extern char lbl_80535D5C[];
void fn_80328620();
void *fn_8032868C();
}
extern "C" {
void fn_803285F8(){
 fn_80066188((int)fn_80328620);
}
void fn_80328620(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D5C,(int)fn_80328720,(int)fn_80326F88,(int)fn_8032868C,(int)lbl_80453500,80,(int)fn_803283F8,0,0,0);
}
void *fn_8032868C(){return fn_803283AC();}
}
#pragma pop
