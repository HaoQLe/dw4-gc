#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void *fn_8032EE84();
void fn_8032EED0();
void fn_8032F18C();
void fn_80333F14();
extern char lbl_804539B8[];
extern char lbl_80535E98[];
void fn_8032F0F8();
void *fn_8032F16C();
}
extern "C" {
void fn_8032F0D0(){
 fn_80066188((int)fn_8032F0F8);
}
void fn_8032F0F8(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535E98,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_8032F16C,(int)lbl_804539B8,88,(int)fn_8032EED0,(int)fn_8032F18C,0,0);
}
void *fn_8032F16C(){return fn_8032EE84();}
}
#pragma pop
