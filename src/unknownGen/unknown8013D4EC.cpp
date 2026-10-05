#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013D3E4();
void fn_8013D420();
void fn_8013D5A8();
void fn_80140664();
extern char lbl_8049DC40[];
extern char lbl_8055F850[8];
extern void *lbl_80563F34;
void fn_8013D514();
void *fn_8013D588();
}
extern "C" {
void fn_8013D4EC(){
 fn_80066188((int)fn_8013D514);
}
void fn_8013D514(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F34,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013D588,(int)lbl_8049DC40,44,(int)fn_8013D420,(int)fn_8013D5A8,0,(int)lbl_8055F850);
}
void *fn_8013D588(){return fn_8013D3E4();}
}
#pragma pop
