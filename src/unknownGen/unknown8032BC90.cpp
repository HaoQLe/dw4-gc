#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B994();
void fn_8032B9E0();
void *fn_8032BD54();
void fn_8032BD64();
void fn_80333D3C();
extern char lbl_8045379C[];
extern char lbl_804E1B24[];
extern char lbl_80535DF8[];
void fn_8032BCB8();
void *fn_8032BD34();
}
extern "C" {
void fn_8032BC90(){
 fn_80066188((int)fn_8032BCB8);
}
void fn_8032BCB8(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535DF8,(int)fn_80333D3C,(int)fn_8032BD54,(int)fn_8032BD34,(int)lbl_8045379C,100,(int)fn_8032B9E0,(int)fn_8032BD64,0,(int)lbl_804E1B24);
}
void *fn_8032BD34(){return fn_8032B994();}
}
#pragma pop
