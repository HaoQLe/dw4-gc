#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_80140054();
void fn_80140090();
void fn_80140218();
void fn_80140664();
extern char lbl_8049DE88[];
extern char lbl_8055F8E0[8];
extern void *lbl_80563FC4;
void fn_80140184();
void *fn_801401F8();
}
extern "C" {
void fn_8014015C(){
 fn_80066188((int)fn_80140184);
}
void fn_80140184(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563FC4,(int)fn_80140664,(int)fn_8013BF68,(int)fn_801401F8,(int)lbl_8049DE88,44,(int)fn_80140090,(int)fn_80140218,0,(int)lbl_8055F8E0);
}
void *fn_801401F8(){return fn_80140054();}
}
#pragma pop
