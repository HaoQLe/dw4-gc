#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_8002942C();
void *fn_800302A0();
void fn_800302DC();
void fn_800304C4();
void fn_80032D80();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_80465F2C[];
extern void *lbl_80561B60;
void fn_80030434();
void *fn_800304A4();
}
extern "C" {
void fn_8003040C(){
 fn_80066188((int)fn_80030434);
}
void fn_80030434(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561B60,(int)fn_80032D80,(int)fn_8002942C,(int)fn_800304A4,(int)lbl_80465F2C,40,(int)fn_800302DC,(int)fn_800304C4,0,0);
}
void *fn_800304A4(){return fn_800302A0();}
}
#pragma pop
