#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013EA1C();
void fn_8013EA58();
void fn_8013EBE0();
void fn_80140664();
extern char lbl_8049DD78[];
extern char lbl_8055F898[8];
extern void *lbl_80563F7C;
void fn_8013EB4C();
void *fn_8013EBC0();
}
extern "C" {
void fn_8013EB24(){
 fn_80066188((int)fn_8013EB4C);
}
void fn_8013EB4C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F7C,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013EBC0,(int)lbl_8049DD78,44,(int)fn_8013EA58,(int)fn_8013EBE0,0,(int)lbl_8055F898);
}
void *fn_8013EBC0(){return fn_8013EA1C();}
}
#pragma pop
