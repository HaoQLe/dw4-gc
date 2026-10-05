#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801BEE2C();
void fn_801BEE68();
void fn_801BEFA8();
extern char lbl_805605A0[8];
extern char lbl_805605A8[7];
extern void *lbl_80564EB0;
void fn_801BEF18();
void *fn_801BEF88();
}
extern "C" {
void fn_801BEEF0(){
 fn_80066188((int)fn_801BEF18);
}
void fn_801BEF18(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564EB0,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801BEF88,(int)lbl_805605A8,12,(int)fn_801BEE68,(int)fn_801BEFA8,0,(int)lbl_805605A0);
}
void *fn_801BEF88(){return fn_801BEE2C();}
}
#pragma pop
