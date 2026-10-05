#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013467C();
void *fn_80134E88();
void fn_80134EC4();
void fn_801350B0();
void fn_80147188();
extern char lbl_8049C830[];
extern char lbl_8055F5F4[8];
extern void *lbl_80563C64;
void fn_8013501C();
void *fn_80135090();
}
extern "C" {
void fn_80134FF4(){
 fn_80066188((int)fn_8013501C);
}
void fn_8013501C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563C64,(int)fn_80147188,(int)fn_8013467C,(int)fn_80135090,(int)lbl_8049C830,44,(int)fn_80134EC4,(int)fn_801350B0,0,(int)lbl_8055F5F4);
}
void *fn_80135090(){return fn_80134E88();}
}
#pragma pop
