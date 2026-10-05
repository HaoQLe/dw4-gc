#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803425BC();
void *fn_80342CAC();
void fn_80342CF8();
void fn_803438F4();
extern char lbl_80455160[];
extern char lbl_80536744[];
void fn_80342D74();
void *fn_80342DE0();
}
extern "C" {
void fn_80342D4C(){
 fn_80066188((int)fn_80342D74);
}
void fn_80342D74(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536744,(int)fn_803438F4,(int)fn_803425BC,(int)fn_80342DE0,(int)lbl_80455160,20,(int)fn_80342CF8,0,0,0);
}
void *fn_80342DE0(){return fn_80342CAC();}
}
#pragma pop
