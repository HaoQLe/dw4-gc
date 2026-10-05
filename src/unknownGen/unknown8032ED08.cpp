#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void *fn_8032EABC();
void fn_8032EB08();
void fn_8032EDC4();
void fn_80333F14();
extern char lbl_8045398C[];
extern char lbl_80535E80[];
void fn_8032ED30();
void *fn_8032EDA4();
}
extern "C" {
void fn_8032ED08(){
 fn_80066188((int)fn_8032ED30);
}
void fn_8032ED30(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535E80,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_8032EDA4,(int)lbl_8045398C,104,(int)fn_8032EB08,(int)fn_8032EDC4,0,0);
}
void *fn_8032EDA4(){return fn_8032EABC();}
}
#pragma pop
