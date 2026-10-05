#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_8032B8A4();
void *fn_8032C7E0();
void fn_8032C82C();
void fn_8032CB84();
void fn_80333F14();
extern char lbl_80453808[];
extern char lbl_804E1B80[];
extern char lbl_80535E14[];
void fn_8032CAE8();
void *fn_8032CB64();
}
extern "C" {
void fn_8032CAC0(){
 fn_80066188((int)fn_8032CAE8);
}
void fn_8032CAE8(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535E14,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_8032CB64,(int)lbl_80453808,104,(int)fn_8032C82C,(int)fn_8032CB84,0,(int)lbl_804E1B80);
}
void *fn_8032CB64(){return fn_8032C7E0();}
}
#pragma pop
