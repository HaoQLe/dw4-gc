#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void *fn_80135D1C();
void fn_80135D58();
void fn_801360B4();
void fn_8013B97C();
extern char lbl_8049C9B0[];
extern void *lbl_80563CB0;
extern void *lbl_80563CB4;
void fn_80135E70();
void *fn_80135ED8();
}
extern "C" {
void fn_80135E48(){
 fn_80066188((int)fn_80135E70);
}
void fn_80135E70(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563CB0,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_80135ED8,(int)lbl_8049C9B0,40,(int)fn_80135D58,0,0,0);
}
void *fn_80135ED8(){return fn_80135D1C();}
void *fn_80135EF8(){
 if(!lbl_80563CB4 || !(reinterpret_cast<unsigned int *>(lbl_80563CB4)[0x24/4]&4)) fn_801360B4();
 return lbl_80563CB4;
}
}
#pragma pop
