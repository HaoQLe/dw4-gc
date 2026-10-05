#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_8013A878();
void *fn_8013AB48();
void fn_8013AB84();
void fn_8013ADF8();
extern char lbl_8049D7D0[];
extern char lbl_8055F7B8[8];
extern void *lbl_80563E6C;
void fn_8013AD64();
void *fn_8013ADD8();
}
extern "C" {
void fn_8013AD3C(){
 fn_80066188((int)fn_8013AD64);
}
void fn_8013AD64(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563E6C,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_8013ADD8,(int)lbl_8049D7D0,68,(int)fn_8013AB84,(int)fn_8013ADF8,0,(int)lbl_8055F7B8);
}
void *fn_8013ADD8(){return fn_8013AB48();}
}
#pragma pop
