#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_8002C31C();
void fn_800300A0();
void *fn_80030248();
void fn_8003BA40();
void fn_8003BC44();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_80468958[];
extern char lbl_8055D738[8];
extern void *lbl_805620D0;
void fn_8003BBD0();
}
extern "C" {
void fn_8003BBA8(){
 fn_80066188((int)fn_8003BBD0);
}
void fn_8003BBD0(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805620D0,(int)fn_800300A0,(int)fn_8002C31C,(int)fn_80030248,(int)lbl_80468958,132,(int)fn_8003BA40,(int)fn_8003BC44,0,(int)lbl_8055D738);
}
}
#pragma pop
