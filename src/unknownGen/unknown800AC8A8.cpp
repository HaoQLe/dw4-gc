#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800AC5D0();
void fn_800AC60C();
void fn_800AC968();
extern char lbl_80477E04[];
extern char lbl_80477E20[];
extern void *lbl_80562438;
void fn_800AC8D0();
void *fn_800AC948();
}
extern "C" {
void fn_800AC8A8(){
 fn_80066188((int)fn_800AC8D0);
}
void fn_800AC8D0(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562438,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800AC948,(int)lbl_80477E20,60,(int)fn_800AC60C,(int)fn_800AC968,0,(int)lbl_80477E04);
}
void *fn_800AC948(){return fn_800AC5D0();}
}
#pragma pop
