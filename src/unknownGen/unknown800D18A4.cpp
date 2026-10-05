#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80037510();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800D031C();
void fn_800D19B4();
void *fn_800D8254();
extern char lbl_8048980C[];
extern void *lbl_80562F38;
void *fn_800D18C4();
void fn_800D1900();
void fn_800D1928();
void *fn_800D1994();
}
extern "C" {
void *fn_800D18A4(){return fn_800D8254();}
void *fn_800D18C4(){
 if(!lbl_80562F38 || !(reinterpret_cast<unsigned int *>(lbl_80562F38)[0x24/4]&4)) fn_800D1900();
 return lbl_80562F38;
}
void fn_800D1900(){
 fn_80066188((int)fn_800D1928);
}
void fn_800D1928(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562F38,(int)fn_80037510,(int)fn_800D031C,(int)fn_800D1994,(int)lbl_8048980C,24,0,(int)fn_800D19B4,0,0);
}
void *fn_800D1994(){return fn_800D18C4();}
}
#pragma pop
