#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void *fn_8032D454();
void fn_8032D4A0();
void fn_8032D75C();
void fn_80333F14();
extern char lbl_80453880[];
extern char lbl_80535E38[];
void fn_8032D6C8();
void *fn_8032D73C();
}
extern "C" {
void fn_8032D6A0(){
 fn_80066188((int)fn_8032D6C8);
}
void fn_8032D6C8(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535E38,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_8032D73C,(int)lbl_80453880,92,(int)fn_8032D4A0,(int)fn_8032D75C,0,0);
}
void *fn_8032D73C(){return fn_8032D454();}
}
#pragma pop
