#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void fn_80138F98();
void *fn_80139794();
void *fn_8013983C();
void fn_80139878();
void fn_80139A48();
extern char lbl_8049D468[];
extern void *lbl_80563DFC;
void fn_801399B8();
void *fn_80139A28();
}
extern "C" {
void fn_80139990(){
 fn_80066188((int)fn_801399B8);
}
void fn_801399B8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563DFC,(int)fn_80138F98,(int)fn_80139794,(int)fn_80139A28,(int)lbl_8049D468,20,(int)fn_80139878,(int)fn_80139A48,0,0);
}
void *fn_80139A28(){return fn_8013983C();}
}
#pragma pop
