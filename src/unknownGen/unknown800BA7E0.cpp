#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800BA704();
void fn_800BA740();
void fn_800BA89C();
extern char lbl_80479ED0[];
extern char lbl_8055E670[8];
extern void *lbl_80562A10;
void fn_800BA808();
void *fn_800BA87C();
}
extern "C" {
void fn_800BA7E0(){
 fn_80066188((int)fn_800BA808);
}
void fn_800BA808(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562A10,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800BA87C,(int)lbl_80479ED0,52,(int)fn_800BA740,(int)fn_800BA89C,0,(int)lbl_8055E670);
}
void *fn_800BA87C(){return fn_800BA704();}
}
#pragma pop
