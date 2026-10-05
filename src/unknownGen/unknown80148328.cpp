#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_8013A878();
void *fn_8014816C();
void fn_801481A8();
void fn_801483E0();
extern char lbl_8049ED98[];
extern void *lbl_80564248;
void fn_80148350();
void *fn_801483C0();
}
extern "C" {
void fn_80148328(){
 fn_80066188((int)fn_80148350);
}
void fn_80148350(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564248,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_801483C0,(int)lbl_8049ED98,48,(int)fn_801481A8,(int)fn_801483E0,0,0);
}
void *fn_801483C0(){return fn_8014816C();}
}
#pragma pop
