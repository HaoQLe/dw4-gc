#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CAEE0();
void fn_800CBB50();
void *fn_800CBC7C();
void fn_800CC144();
void fn_800CC288();
extern char lbl_80480130[];
extern char lbl_8055E9D4[8];
extern void *lbl_80562C14;
extern void *lbl_80562C54;
void fn_800CC20C();
void *fn_800CC280();
}
extern "C" {
void fn_800CC1E4(){
 fn_80066188((int)fn_800CC20C);
}
void fn_800CC20C(){
 fn_800CAEE0();
 fn_80066204(0,(int)&lbl_80562C54,(int)fn_800CBB50,(int)fn_800CC280,(int)fn_800CBC7C,(int)lbl_80480130,52,(int)fn_800CC144,(int)fn_800CC288,0,(int)lbl_8055E9D4);
}
void *fn_800CC280(){return lbl_80562C14;}
}
#pragma pop
