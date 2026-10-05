#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B2E3C();
void fn_802E3D20();
void fn_803250AC();
void *fn_80336678();
void fn_803366C4();
extern char lbl_8045408C[];
extern char lbl_80536098[];
void fn_8033683C();
void *fn_803368A8();
}
extern "C" {
void fn_80336814(){
 fn_80066188((int)fn_8033683C);
}
void fn_8033683C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536098,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_803368A8,(int)lbl_8045408C,28,(int)fn_803366C4,0,0,0);
}
void *fn_803368A8(){return fn_80336678();}
}
#pragma pop
