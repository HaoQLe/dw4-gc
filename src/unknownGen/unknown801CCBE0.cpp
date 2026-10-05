#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801CCADC();
void fn_801CCB18();
void fn_801CCCA0();
extern char lbl_804B27B4[];
extern char lbl_804B27C4[];
extern void *lbl_80565538;
void fn_801CCC08();
void *fn_801CCC80();
}
extern "C" {
void fn_801CCBE0(){
 fn_80066188((int)fn_801CCC08);
}
void fn_801CCC08(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565538,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801CCC80,(int)lbl_804B27C4,20,(int)fn_801CCB18,(int)fn_801CCCA0,0,(int)lbl_804B27B4);
}
void *fn_801CCC80(){return fn_801CCADC();}
}
#pragma pop
