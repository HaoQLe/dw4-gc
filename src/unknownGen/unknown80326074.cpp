#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_802E3D20();
void fn_803250AC();
void *fn_80325ED8();
void fn_80325F24();
extern char lbl_8045332C[];
extern char lbl_80535CCC[];
void fn_8032609C();
void *fn_80326108();
}
extern "C" {
void fn_80326074(){
 fn_80066188((int)fn_8032609C);
}
void fn_8032609C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535CCC,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_80326108,(int)lbl_8045332C,28,(int)fn_80325F24,0,0,0);
}
void *fn_80326108(){return fn_80325ED8();}
}
#pragma pop
