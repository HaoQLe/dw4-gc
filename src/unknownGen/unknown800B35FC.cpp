#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800B346C();
void fn_800B34A8();
void fn_800B36BC();
extern char lbl_80478F40[];
extern char lbl_80478F4C[];
extern void *lbl_80562728;
void fn_800B3624();
void *fn_800B369C();
}
extern "C" {
void fn_800B35FC(){
 fn_80066188((int)fn_800B3624);
}
void fn_800B3624(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562728,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B369C,(int)lbl_80478F4C,20,(int)fn_800B34A8,(int)fn_800B36BC,0,(int)lbl_80478F40);
}
void *fn_800B369C(){return fn_800B346C();}
}
#pragma pop
