#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800AF4E0();
void fn_800AF51C();
void fn_800AF72C();
extern char lbl_80478534[];
extern char lbl_80478548[];
extern void *lbl_80562554;
void fn_800AF694();
void *fn_800AF70C();
}
extern "C" {
void fn_800AF66C(){
 fn_80066188((int)fn_800AF694);
}
void fn_800AF694(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562554,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800AF70C,(int)lbl_80478548,72,(int)fn_800AF51C,(int)fn_800AF72C,0,(int)lbl_80478534);
}
void *fn_800AF70C(){return fn_800AF4E0();}
}
#pragma pop
