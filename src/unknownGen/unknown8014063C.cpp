#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80140544();
void fn_80140580();
void fn_80140700();
void fn_801408E4();
extern char lbl_8049DEC4[];
extern char lbl_8055F8F0[8];
extern void *lbl_80563FD4;
extern void *lbl_80563FF8;
void fn_80140664();
void *fn_801406D8();
void *fn_801406F8();
}
extern "C" {
void fn_8014063C(){
 fn_80066188((int)fn_80140664);
}
void fn_80140664(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563FD4,(int)fn_801408E4,(int)fn_801406F8,(int)fn_801406D8,(int)lbl_8049DEC4,44,(int)fn_80140580,(int)fn_80140700,0,(int)lbl_8055F8F0);
}
void *fn_801406D8(){return fn_80140544();}
void *fn_801406F8(){return lbl_80563FF8;}
}
#pragma pop
