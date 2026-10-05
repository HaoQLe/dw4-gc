#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801CCF04();
void fn_801CCF40();
void fn_801CD084();
extern char lbl_804B285C[];
extern char lbl_80560A10[8];
extern void *lbl_8056554C;
void fn_801CCFF0();
void *fn_801CD064();
}
extern "C" {
void fn_801CCFC8(){
 fn_80066188((int)fn_801CCFF0);
}
void fn_801CCFF0(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056554C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801CD064,(int)lbl_804B285C,24,(int)fn_801CCF40,(int)fn_801CD084,0,(int)lbl_80560A10);
}
void *fn_801CD064(){return fn_801CCF04();}
}
#pragma pop
