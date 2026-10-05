#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80284540();
void fn_80284B74();
void fn_80402E28();
void *fn_80404F00();
void fn_80404F4C();
void fn_804050A0();
extern char lbl_8046215C[];
extern char lbl_8055C848[];
void fn_8040500C();
void *fn_80405080();
}
extern "C" {
void fn_80404FE4(){
 fn_80066188((int)fn_8040500C);
}
void fn_8040500C(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055C848,(int)fn_80284B74,(int)fn_80284540,(int)fn_80405080,(int)lbl_8046215C,16,(int)fn_80404F4C,(int)fn_804050A0,0,0);
}
void *fn_80405080(){return fn_80404F00();}
}
#pragma pop
