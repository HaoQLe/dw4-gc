#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void *fn_800B375C();
void fn_800B3798();
void fn_800B3A18();
void fn_800B3F08();
extern char lbl_80478F7C[];
extern char lbl_80478F90[];
extern void *lbl_80562734;
extern void *lbl_80562764;
void fn_800B3978();
void *fn_800B39F0();
void *fn_800B3A10();
}
extern "C" {
void fn_800B3950(){
 fn_80066188((int)fn_800B3978);
}
void fn_800B3978(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562734,(int)fn_800B3F08,(int)fn_800B3A10,(int)fn_800B39F0,(int)lbl_80478F90,44,(int)fn_800B3798,(int)fn_800B3A18,0,(int)lbl_80478F7C);
}
void *fn_800B39F0(){return fn_800B375C();}
void *fn_800B3A10(){return lbl_80562764;}
}
#pragma pop
