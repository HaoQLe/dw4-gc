#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void fn_800D0B4C();
void *fn_800D0E0C();
void fn_800D7E2C();
void fn_800D80E8();
extern char lbl_8048E51C[];
extern char lbl_8048E530[];
extern void *lbl_80562E3C;
extern void *lbl_80563400;
void fn_800D8068();
void *fn_800D80E0();
}
extern "C" {
void fn_800D8040(){
 fn_80066188((int)fn_800D8068);
}
void fn_800D8068(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563400,(int)fn_800D0B4C,(int)fn_800D80E0,(int)fn_800D0E0C,(int)lbl_8048E530,508,(int)fn_800D7E2C,(int)fn_800D80E8,0,(int)lbl_8048E51C);
}
void *fn_800D80E0(){return lbl_80562E3C;}
}
#pragma pop
