#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013BF68();
void *fn_8013CEF4();
void fn_8013CF30();
void fn_8013D0B8();
void fn_80140664();
extern char lbl_8049DBF0[];
extern char lbl_8055F840[8];
extern void *lbl_80563F24;
void fn_8013D024();
void *fn_8013D098();
}
extern "C" {
void fn_8013CFFC(){
 fn_80066188((int)fn_8013D024);
}
void fn_8013D024(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F24,(int)fn_80140664,(int)fn_8013BF68,(int)fn_8013D098,(int)lbl_8049DBF0,44,(int)fn_8013CF30,(int)fn_8013D0B8,0,(int)lbl_8055F840);
}
void *fn_8013D098(){return fn_8013CEF4();}
}
#pragma pop
