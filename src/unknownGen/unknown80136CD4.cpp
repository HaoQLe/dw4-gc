#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void *fn_80136B30();
void fn_80136B6C();
void fn_80136D90();
void fn_8013B97C();
extern char lbl_8049CB80[];
extern char lbl_8055F68C[8];
extern void *lbl_80563CF0;
void fn_80136CFC();
void *fn_80136D70();
}
extern "C" {
void fn_80136CD4(){
 fn_80066188((int)fn_80136CFC);
}
void fn_80136CFC(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563CF0,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_80136D70,(int)lbl_8049CB80,68,(int)fn_80136B6C,(int)fn_80136D90,0,(int)lbl_8055F68C);
}
void *fn_80136D70(){return fn_80136B30();}
}
#pragma pop
