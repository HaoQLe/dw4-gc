#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void *fn_8013A554();
void fn_8013A590();
void fn_8013A738();
void fn_8013B97C();
extern char lbl_8049D620[];
extern void *lbl_80563E3C;
void fn_8013A6A8();
void *fn_8013A718();
}
extern "C" {
void fn_8013A680(){
 fn_80066188((int)fn_8013A6A8);
}
void fn_8013A6A8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563E3C,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8013A718,(int)lbl_8049D620,64,(int)fn_8013A590,(int)fn_8013A738,0,0);
}
void *fn_8013A718(){return fn_8013A554();}
}
#pragma pop
