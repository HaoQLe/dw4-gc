#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void fn_80138F98();
void *fn_801395C0();
void fn_801395FC();
void fn_8013979C();
extern char lbl_8049D448[];
extern void *lbl_80563DD0;
extern void *lbl_80563DF4;
void fn_80139704();
void *fn_80139774();
void *fn_80139794();
}
extern "C" {
void fn_801396DC(){
 fn_80066188((int)fn_80139704);
}
void fn_80139704(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563DF4,(int)fn_80138F98,(int)fn_80139794,(int)fn_80139774,(int)lbl_8049D448,16,(int)fn_801395FC,(int)fn_8013979C,0,0);
}
void *fn_80139774(){return fn_801395C0();}
void *fn_80139794(){return lbl_80563DD0;}
}
#pragma pop
