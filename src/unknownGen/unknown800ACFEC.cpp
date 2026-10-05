#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800ACEF4();
void fn_800ACF30();
void fn_800AD0A8();
extern char lbl_80477FD8[];
extern char lbl_8055DEEC[8];
extern void *lbl_8056247C;
void fn_800AD014();
void *fn_800AD088();
}
extern "C" {
void fn_800ACFEC(){
 fn_80066188((int)fn_800AD014);
}
void fn_800AD014(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056247C,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800AD088,(int)lbl_80477FD8,156,(int)fn_800ACF30,(int)fn_800AD0A8,0,(int)lbl_8055DEEC);
}
void *fn_800AD088(){return fn_800ACEF4();}
}
#pragma pop
