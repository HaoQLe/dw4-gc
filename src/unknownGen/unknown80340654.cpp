#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_803250AC();
void *fn_80340538();
void fn_80340584();
void fn_80340718();
extern char lbl_80454ECC[];
extern char lbl_804E395C[];
extern char lbl_80536620[];
void fn_8034067C();
void *fn_803406F8();
}
extern "C" {
void fn_80340654(){
 fn_80066188((int)fn_8034067C);
}
void fn_8034067C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536620,(int)fn_80066B08,(int)fn_800237D0,(int)fn_803406F8,(int)lbl_80454ECC,20,(int)fn_80340584,(int)fn_80340718,0,(int)lbl_804E395C);
}
void *fn_803406F8(){return fn_80340538();}
}
#pragma pop
