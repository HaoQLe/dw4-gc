#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801AB410();
void fn_801AB44C();
void fn_801AB7C8();
void *fn_801AB984();
void fn_801ABAA0();
extern char lbl_804AB510[];
extern char lbl_804AB520[];
extern void *lbl_8056469C;
extern void *lbl_805646D0;
void fn_801AB724();
void *fn_801AB7A0();
void *fn_801AB7C0();
}
extern "C" {
void fn_801AB6FC(){
 fn_80066188((int)fn_801AB724);
}
void fn_801AB724(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056469C,(int)fn_801ABAA0,(int)fn_801AB7C0,(int)fn_801AB7A0,(int)lbl_804AB520,104,(int)fn_801AB44C,(int)fn_801AB7C8,(int)fn_801AB984,(int)lbl_804AB510);
}
void *fn_801AB7A0(){return fn_801AB410();}
void *fn_801AB7C0(){return lbl_805646D0;}
}
#pragma pop
