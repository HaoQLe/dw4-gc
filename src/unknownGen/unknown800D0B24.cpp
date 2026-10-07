#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80037510();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800D031C();
void *fn_800D0994();
void fn_800D09D0();
void *fn_800D0BE4();
extern char lbl_80488BA0[];
extern char lbl_80488BAC[];
extern void *lbl_80562E3C;
void fn_800D0B4C();
void *fn_800D0BC4();
}
extern "C" {
void fn_800D0B24(){
 fn_80066188((int)fn_800D0B4C);
}
void fn_800D0B4C(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562E3C,(int)fn_80037510,(int)fn_800D031C,(int)fn_800D0BC4,(int)lbl_80488BAC,392,(int)fn_800D09D0,(int)fn_800D0BE4,0,(int)lbl_80488BA0);
}
void *fn_800D0BC4(){return fn_800D0994();}
}
#pragma pop
