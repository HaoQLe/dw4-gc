#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80337428();
void *fn_80337A44();
void fn_80337A90();
void fn_80337CD8();
void fn_80337EA8();
extern char lbl_804541A8[];
extern char lbl_804E252C[];
extern char lbl_805360F8[];
void fn_80337C3C();
void *fn_80337CB8();
}
extern "C" {
void fn_80337C14(){
 fn_80066188((int)fn_80337C3C);
}
void fn_80337C3C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805360F8,(int)fn_80337EA8,(int)fn_80337428,(int)fn_80337CB8,(int)lbl_804541A8,68,(int)fn_80337A90,(int)fn_80337CD8,0,(int)lbl_804E252C);
}
void *fn_80337CB8(){return fn_80337A44();}
}
#pragma pop
