#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013F8EC();
void fn_8013F928();
void fn_8013FAB0();
void fn_80140664();
extern char lbl_8049DE38[];
extern char lbl_8055F8C8[8];
extern void *lbl_80563FAC;
void fn_8013FA1C();
void *fn_8013FA90();
}
extern "C" {
void fn_8013F9F4(){
 fn_80066188((int)fn_8013FA1C);
}
void fn_8013FA1C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563FAC,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013FA90,(int)lbl_8049DE38,44,(int)fn_8013F928,(int)fn_8013FAB0,0,(int)lbl_8055F8C8);
}
void *fn_8013FA90(){return fn_8013F8EC();}
}
#pragma pop
