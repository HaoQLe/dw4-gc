#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void fn_80143C60();
void *fn_80143D1C();
void fn_80143D58();
void fn_80143FD4();
extern char lbl_8049E460[];
extern char lbl_8049E478[];
extern void *lbl_805640D8;
extern void *lbl_805640DC;
void fn_80143F34();
void *fn_80143FAC();
void *fn_80143FCC();
}
extern "C" {
void fn_80143F0C(){
 fn_80066188((int)fn_80143F34);
}
void fn_80143F34(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805640DC,(int)fn_80143C60,(int)fn_80143FCC,(int)fn_80143FAC,(int)lbl_8049E478,36,(int)fn_80143D58,(int)fn_80143FD4,0,(int)lbl_8049E460);
}
void *fn_80143FAC(){return fn_80143D1C();}
void *fn_80143FCC(){return lbl_805640D8;}
}
#pragma pop
