#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_8032B8A4();
void *fn_8032F24C();
void fn_8032F298();
void fn_8032F554();
void fn_80333F14();
extern char lbl_804539DC[];
extern char lbl_80535EA0[];
void fn_8032F4C0();
void *fn_8032F534();
}
extern "C" {
void fn_8032F498(){
 fn_80066188((int)fn_8032F4C0);
}
void fn_8032F4C0(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535EA0,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_8032F534,(int)lbl_804539DC,88,(int)fn_8032F298,(int)fn_8032F554,0,0);
}
void *fn_8032F534(){return fn_8032F24C();}
}
#pragma pop
