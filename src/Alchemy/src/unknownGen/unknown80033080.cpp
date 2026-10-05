#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80032F0C();
void fn_80032F48();
void fn_80033140();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
extern char lbl_8046737C[];
extern char lbl_80467390[];
extern void *lbl_80561D14;
void fn_800330A8();
void *fn_80033120();
}
extern "C" {
void fn_80033080(){
 fn_80066188((int)fn_800330A8);
}
void fn_800330A8(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561D14,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80033120,(int)lbl_80467390,28,(int)fn_80032F48,(int)fn_80033140,0,(int)lbl_8046737C);
}
void *fn_80033120(){return fn_80032F0C();}
}
#pragma pop
