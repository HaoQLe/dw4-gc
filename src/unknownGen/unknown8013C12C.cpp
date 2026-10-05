#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013C024();
void fn_8013C060();
void fn_8013C1E8();
void fn_80140664();
extern char lbl_8049DB18[];
extern char lbl_8055F810[8];
extern void *lbl_80563EF4;
void fn_8013C154();
void *fn_8013C1C8();
}
extern "C" {
void fn_8013C12C(){
 fn_80066188((int)fn_8013C154);
}
void fn_8013C154(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563EF4,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013C1C8,(int)lbl_8049DB18,44,(int)fn_8013C060,(int)fn_8013C1E8,0,(int)lbl_8055F810);
}
void *fn_8013C1C8(){return fn_8013C024();}
}
#pragma pop
