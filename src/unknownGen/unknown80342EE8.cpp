#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80342E40();
void fn_80342E8C();
void fn_80342F9C();
void fn_8034350C();
extern char lbl_80455178[];
extern char lbl_80536748[];
void fn_80342F10();
void *fn_80342F7C();
}
extern "C" {
void fn_80342EE8(){
 fn_80066188((int)fn_80342F10);
}
void fn_80342F10(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536748,(int)fn_8034350C,(int)fn_80342F9C,(int)fn_80342F7C,(int)lbl_80455178,24,(int)fn_80342E8C,0,0,0);
}
void *fn_80342F7C(){return fn_80342E40();}
}
#pragma pop
