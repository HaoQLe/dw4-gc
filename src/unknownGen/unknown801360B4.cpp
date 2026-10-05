#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_80135EF8();
void fn_80135F34();
void fn_8013616C();
void fn_8013A878();
extern char lbl_8049C9C0[];
extern void *lbl_80563CB4;
void fn_801360DC();
void *fn_8013614C();
}
extern "C" {
void fn_801360B4(){
 fn_80066188((int)fn_801360DC);
}
void fn_801360DC(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563CB4,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_8013614C,(int)lbl_8049C9C0,52,(int)fn_80135F34,(int)fn_8013616C,0,0);
}
void *fn_8013614C(){return fn_80135EF8();}
}
#pragma pop
