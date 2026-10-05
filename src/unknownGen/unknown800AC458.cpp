#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800AC37C();
void fn_800AC3B8();
void fn_800AC514();
extern char lbl_80477DDC[];
extern char lbl_8055DEA0[8];
extern void *lbl_80562430;
void fn_800AC480();
void *fn_800AC4F4();
}
extern "C" {
void fn_800AC458(){
 fn_80066188((int)fn_800AC480);
}
void fn_800AC480(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562430,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800AC4F4,(int)lbl_80477DDC,16,(int)fn_800AC3B8,(int)fn_800AC514,0,(int)lbl_8055DEA0);
}
void *fn_800AC4F4(){return fn_800AC37C();}
}
#pragma pop
