#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801CA224();
void fn_801CA260();
void fn_801CA3E4();
extern char lbl_804B1FC0[];
extern char lbl_80560944[8];
extern void *lbl_80565438;
void fn_801CA350();
void *fn_801CA3C4();
}
extern "C" {
void fn_801CA328(){
 fn_80066188((int)fn_801CA350);
}
void fn_801CA350(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565438,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801CA3C4,(int)lbl_804B1FC0,16,(int)fn_801CA260,(int)fn_801CA3E4,0,(int)lbl_80560944);
}
void *fn_801CA3C4(){return fn_801CA224();}
}
#pragma pop
