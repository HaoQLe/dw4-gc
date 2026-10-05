#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800B5AA0();
void fn_800B5ADC();
void fn_800B5C38();
extern char lbl_80479300[];
extern char lbl_8055E414[8];
extern void *lbl_805627F4;
void fn_800B5BA4();
void *fn_800B5C18();
}
extern "C" {
void fn_800B5B7C(){
 fn_80066188((int)fn_800B5BA4);
}
void fn_800B5BA4(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805627F4,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B5C18,(int)lbl_80479300,148,(int)fn_800B5ADC,(int)fn_800B5C38,0,(int)lbl_8055E414);
}
void *fn_800B5C18(){return fn_800B5AA0();}
}
#pragma pop
