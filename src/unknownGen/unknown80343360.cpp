#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80342F9C();
void *fn_80343314();
void fn_80343418();
void fn_8034350C();
extern char lbl_804551B8[];
extern char lbl_80536754[];
void fn_80343388();
void *fn_803433F8();
}
extern "C" {
void fn_80343360(){
 fn_80066188((int)fn_80343388);
}
void fn_80343388(){
 fn_803250AC();
 fn_80066204(1,(int)lbl_80536754,(int)fn_8034350C,(int)fn_80342F9C,(int)fn_803433F8,(int)lbl_804551B8,28,0,(int)fn_80343418,0,0);
}
void *fn_803433F8(){return fn_80343314();}
}
#pragma pop
