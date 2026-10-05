#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BDA4();
void fn_8013BDE0();
void fn_8013BF70();
void fn_80140664();
extern char lbl_8049DAFC[];
extern char lbl_8055F808[8];
extern void *lbl_80563EEC;
extern void *lbl_80563FD4;
void fn_8013BED4();
void *fn_8013BF48();
void *fn_8013BF68();
}
extern "C" {
void fn_8013BEAC(){
 fn_80066188((int)fn_8013BED4);
}
void fn_8013BED4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563EEC,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013BF48,(int)lbl_8049DAFC,44,(int)fn_8013BDE0,(int)fn_8013BF70,0,(int)lbl_8055F808);
}
void *fn_8013BF48(){return fn_8013BDA4();}
void *fn_8013BF68(){return lbl_80563FD4;}
}
#pragma pop
