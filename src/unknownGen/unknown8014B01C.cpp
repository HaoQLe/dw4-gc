#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void fn_80140BAC();
void *fn_8014AEDC();
void fn_8014AF18();
void fn_8014B0E0();
extern char lbl_8049F10C[];
extern char lbl_8055FB8C[8];
extern void *lbl_80564004;
extern void *lbl_805642F8;
void fn_8014B044();
void *fn_8014B0B8();
void *fn_8014B0D8();
}
extern "C" {
void fn_8014B01C(){
 fn_80066188((int)fn_8014B044);
}
void fn_8014B044(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642F8,(int)fn_80140BAC,(int)fn_8014B0D8,(int)fn_8014B0B8,(int)lbl_8049F10C,40,(int)fn_8014AF18,(int)fn_8014B0E0,0,(int)lbl_8055FB8C);
}
void *fn_8014B0B8(){return fn_8014AEDC();}
void *fn_8014B0D8(){return lbl_80564004;}
}
#pragma pop
