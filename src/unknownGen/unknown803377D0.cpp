#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_80337428();
void *fn_80337600();
void fn_8033764C();
void fn_80337894();
void fn_80337EA8();
extern char lbl_80454190[];
extern char lbl_804E2500[];
extern char lbl_805360E8[];
void fn_803377F8();
void *fn_80337874();
}
extern "C" {
void fn_803377D0(){
 fn_80066188((int)fn_803377F8);
}
void fn_803377F8(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805360E8,(int)fn_80337EA8,(int)fn_80337428,(int)fn_80337874,(int)lbl_80454190,68,(int)fn_8033764C,(int)fn_80337894,0,(int)lbl_804E2500);
}
void *fn_80337874(){return fn_80337600();}
}
#pragma pop
