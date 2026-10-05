#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800D3540();
void fn_800D357C();
void fn_800D36F0();
extern char lbl_80489F44[];
extern char lbl_8055EC30[8];
extern void *lbl_80562FF8;
void fn_800D365C();
void *fn_800D36D0();
}
extern "C" {
void fn_800D3634(){
 fn_80066188((int)fn_800D365C);
}
void fn_800D365C(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562FF8,(int)fn_8002907C,(int)fn_80024180,(int)fn_800D36D0,(int)lbl_80489F44,28,(int)fn_800D357C,(int)fn_800D36F0,0,(int)lbl_8055EC30);
}
void *fn_800D36D0(){return fn_800D3540();}
}
#pragma pop
