#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_803250AC();
void *fn_80337E34();
void fn_80337F40();
extern char lbl_804541C0[];
extern char lbl_804E2558[];
extern char lbl_80536108[];
void fn_80337EA8();
void *fn_80337F20();
}
extern "C" {
void fn_80337E80(){
 fn_80066188((int)fn_80337EA8);
}
void fn_80337EA8(){
 fn_803250AC();
 fn_80066204(1,(int)lbl_80536108,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80337F20,(int)lbl_804541C0,60,0,(int)fn_80337F40,0,(int)lbl_804E2558);
}
void *fn_80337F20(){return fn_80337E34();}
}
#pragma pop
