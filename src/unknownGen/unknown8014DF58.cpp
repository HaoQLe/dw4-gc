#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_8013A878();
void *fn_8014DD9C();
void fn_8014DDD8();
void fn_8014E014();
extern char lbl_8049F9F0[];
extern char lbl_8055FBE0[8];
extern void *lbl_8056441C;
void fn_8014DF80();
void *fn_8014DFF4();
}
extern "C" {
void fn_8014DF58(){
 fn_80066188((int)fn_8014DF80);
}
void fn_8014DF80(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056441C,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_8014DFF4,(int)lbl_8049F9F0,52,(int)fn_8014DDD8,(int)fn_8014E014,0,(int)lbl_8055FBE0);
}
void *fn_8014DFF4(){return fn_8014DD9C();}
}
#pragma pop
