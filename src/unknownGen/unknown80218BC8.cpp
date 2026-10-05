#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_80216620();
void *fn_80218B04();
void fn_80218B40();
void fn_80218C84();
extern char lbl_804BA8F4[];
extern char lbl_80560C58[8];
extern void *lbl_80565AE4;
void fn_80218BF0();
void *fn_80218C64();
}
extern "C" {
void fn_80218BC8(){
 fn_80066188((int)fn_80218BF0);
}
void fn_80218BF0(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565AE4,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80218C64,(int)lbl_804BA8F4,12,(int)fn_80218B40,(int)fn_80218C84,0,(int)lbl_80560C58);
}
void *fn_80218C64(){return fn_80218B04();}
}
#pragma pop
