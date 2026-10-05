#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801BA6F4();
void fn_801BA730();
void fn_801BAA40();
extern char lbl_804AEAC0[];
extern char lbl_804AEADC[];
extern void *lbl_80564D48;
void fn_801BA9A8();
void *fn_801BAA20();
}
extern "C" {
void fn_801BA980(){
 fn_80066188((int)fn_801BA9A8);
}
void fn_801BA9A8(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564D48,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801BAA20,(int)lbl_804AEADC,60,(int)fn_801BA730,(int)fn_801BAA40,0,(int)lbl_804AEAC0);
}
void *fn_801BAA20(){return fn_801BA6F4();}
}
#pragma pop
