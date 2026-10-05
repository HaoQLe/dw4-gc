#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC0FC();
void fn_800AC138();
void fn_800AC29C();
extern char lbl_80477D50[];
extern char lbl_8055DE78[8];
extern void *lbl_8056240C;
extern void *lbl_80562410;
void fn_800AC200();
void *fn_800AC274();
void *fn_800AC294();
}
extern "C" {
void fn_800AC1D8(){
 fn_80066188((int)fn_800AC200);
}
void fn_800AC200(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562410,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800AC274,(int)lbl_80477D50,40,(int)fn_800AC138,(int)fn_800AC29C,0,(int)lbl_8055DE78);
}
void *fn_800AC274(){return fn_800AC0FC();}
void *fn_800AC294(){return lbl_8056240C;}
}
#pragma pop
