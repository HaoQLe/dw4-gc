#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void *fn_803310E4();
void fn_80331130();
void fn_80331488();
void fn_80333F14();
extern char lbl_80453AF4[];
extern char lbl_804E1E6C[];
extern char lbl_80535EFC[];
void fn_803313EC();
void *fn_80331468();
}
extern "C" {
void fn_803313C4(){
 fn_80066188((int)fn_803313EC);
}
void fn_803313EC(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535EFC,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_80331468,(int)lbl_80453AF4,88,(int)fn_80331130,(int)fn_80331488,0,(int)lbl_804E1E6C);
}
void *fn_80331468(){return fn_803310E4();}
}
#pragma pop
