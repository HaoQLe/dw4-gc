#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void *fn_8013A03C();
void fn_8013A078();
void fn_8013A220();
void fn_8013B97C();
extern char lbl_8049D51C[];
extern void *lbl_80563E1C;
void fn_8013A190();
void *fn_8013A200();
}
extern "C" {
void fn_8013A168(){
 fn_80066188((int)fn_8013A190);
}
void fn_8013A190(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563E1C,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8013A200,(int)lbl_8049D51C,44,(int)fn_8013A078,(int)fn_8013A220,0,0);
}
void *fn_8013A200(){return fn_8013A03C();}
}
#pragma pop
