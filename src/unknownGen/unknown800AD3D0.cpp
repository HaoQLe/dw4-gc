#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800AD334();
void fn_800AD370();
void fn_800AD488();
extern char lbl_80478118[];
extern void *lbl_805624A0;
void fn_800AD3F8();
void *fn_800AD468();
}
extern "C" {
void fn_800AD3D0(){
 fn_80066188((int)fn_800AD3F8);
}
void fn_800AD3F8(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805624A0,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800AD468,(int)lbl_80478118,80,(int)fn_800AD370,(int)fn_800AD488,0,0);
}
void *fn_800AD468(){return fn_800AD334();}
}
#pragma pop
