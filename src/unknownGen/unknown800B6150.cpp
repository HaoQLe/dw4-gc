#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800B5FC0();
void fn_800B5FFC();
void fn_800B6210();
extern char lbl_804794F4[];
extern char lbl_80479500[];
extern void *lbl_8056283C;
void fn_800B6178();
void *fn_800B61F0();
}
extern "C" {
void fn_800B6150(){
 fn_80066188((int)fn_800B6178);
}
void fn_800B6178(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056283C,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B61F0,(int)lbl_80479500,32,(int)fn_800B5FFC,(int)fn_800B6210,0,(int)lbl_804794F4);
}
void *fn_800B61F0(){return fn_800B5FC0();}
}
#pragma pop
