#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801B4808();
void fn_801B4844();
void fn_801B49CC();
extern char lbl_804AD460[];
extern char lbl_804AD46C[];
extern void *lbl_80564A40;
void fn_801B4934();
void *fn_801B49AC();
}
extern "C" {
void fn_801B490C(){
 fn_80066188((int)fn_801B4934);
}
void fn_801B4934(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564A40,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801B49AC,(int)lbl_804AD46C,16,(int)fn_801B4844,(int)fn_801B49CC,0,(int)lbl_804AD460);
}
void *fn_801B49AC(){return fn_801B4808();}
}
#pragma pop
