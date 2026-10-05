#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800B1418();
void fn_800B1454();
void fn_800B15B0();
extern char lbl_8047899C[];
extern char lbl_8055E1D0[8];
extern void *lbl_80562644;
void fn_800B151C();
void *fn_800B1590();
}
extern "C" {
void fn_800B14F4(){
 fn_80066188((int)fn_800B151C);
}
void fn_800B151C(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562644,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B1590,(int)lbl_8047899C,20,(int)fn_800B1454,(int)fn_800B15B0,0,(int)lbl_8055E1D0);
}
void *fn_800B1590(){return fn_800B1418();}
}
#pragma pop
