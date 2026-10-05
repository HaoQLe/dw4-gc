#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void *fn_8032FE84();
void fn_8032FED0();
void fn_80333F14();
extern char lbl_80453A40[];
extern char lbl_80535EBC[];
void fn_803300F8();
void *fn_80330164();
}
extern "C" {
void fn_803300D0(){
 fn_80066188((int)fn_803300F8);
}
void fn_803300F8(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535EBC,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_80330164,(int)lbl_80453A40,84,(int)fn_8032FED0,0,0,0);
}
void *fn_80330164(){return fn_8032FE84();}
}
#pragma pop
