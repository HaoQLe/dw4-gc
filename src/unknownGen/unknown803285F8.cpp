#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_80325C6C();
void *fn_80326F88();
void *fn_803283AC();
void fn_803283F8();
void *fn_803287A8();
extern char lbl_80453500[];
extern char lbl_80453514[];
extern char lbl_80535D5C[];
extern void *lbl_80535D60;
void fn_80328620();
void *fn_8032868C();
void *fn_803286AC();
void fn_803286F8();
void fn_80328720();
void *fn_80328788();
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
void *fn_803286AC(){
 if(!lbl_80535D60 || !(reinterpret_cast<unsigned int *>(lbl_80535D60)[0x24/4]&4)) fn_803286F8();
 return lbl_80535D60;
}
void fn_803286F8(){
 fn_80066188((int)fn_80328720);
}
void fn_80328720(){
 fn_803250AC();
 fn_80066204(1,(int)&lbl_80535D60,(int)fn_80325C6C,(int)fn_803287A8,(int)fn_80328788,(int)lbl_80453514,80,0,0,0,0);
}
void *fn_80328788(){return fn_803286AC();}
}
#pragma pop
