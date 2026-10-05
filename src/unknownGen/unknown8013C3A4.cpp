#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013C29C();
void fn_8013C2D8();
void fn_8013C460();
void fn_80140664();
extern char lbl_8049DB34[];
extern char lbl_8055F818[8];
extern void *lbl_80563EFC;
void fn_8013C3CC();
void *fn_8013C440();
}
extern "C" {
void fn_8013C3A4(){
 fn_80066188((int)fn_8013C3CC);
}
void fn_8013C3CC(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563EFC,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013C440,(int)lbl_8049DB34,44,(int)fn_8013C2D8,(int)fn_8013C460,0,(int)lbl_8055F818);
}
void *fn_8013C440(){return fn_8013C29C();}
}
#pragma pop
