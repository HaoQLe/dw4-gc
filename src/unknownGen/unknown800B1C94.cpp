#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800B1BB8();
void fn_800B1BF4();
void fn_800B1D50();
extern char lbl_80478C88[];
extern char lbl_8055E23C[8];
extern void *lbl_80562694;
void fn_800B1CBC();
void *fn_800B1D30();
}
extern "C" {
void fn_800B1C94(){
 fn_80066188((int)fn_800B1CBC);
}
void fn_800B1CBC(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562694,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B1D30,(int)lbl_80478C88,20,(int)fn_800B1BF4,(int)fn_800B1D50,0,(int)lbl_8055E23C);
}
void *fn_800B1D30(){return fn_800B1BB8();}
}
#pragma pop
