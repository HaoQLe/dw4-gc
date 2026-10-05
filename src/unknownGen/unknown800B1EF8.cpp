#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800B1E5C();
void fn_800B1E98();
void fn_800B1FB0();
extern char lbl_80478CA4[];
extern void *lbl_805626A0;
void fn_800B1F20();
void *fn_800B1F90();
}
extern "C" {
void fn_800B1EF8(){
 fn_80066188((int)fn_800B1F20);
}
void fn_800B1F20(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805626A0,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B1F90,(int)lbl_80478CA4,76,(int)fn_800B1E98,(int)fn_800B1FB0,0,0);
}
void *fn_800B1F90(){return fn_800B1E5C();}
}
#pragma pop
