#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013D8D4();
void fn_8013D910();
void fn_8013DA98();
void fn_80140664();
extern char lbl_8049DC8C[];
extern char lbl_8055F860[8];
extern void *lbl_80563F44;
void fn_8013DA04();
void *fn_8013DA78();
}
extern "C" {
void fn_8013D9DC(){
 fn_80066188((int)fn_8013DA04);
}
void fn_8013DA04(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F44,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013DA78,(int)lbl_8049DC8C,44,(int)fn_8013D910,(int)fn_8013DA98,0,(int)lbl_8055F860);
}
void *fn_8013DA78(){return fn_8013D8D4();}
}
#pragma pop
