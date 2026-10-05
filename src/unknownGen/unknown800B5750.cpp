#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800B5634();
void fn_800B5670();
void fn_800B5810();
extern char lbl_80479298[];
extern char lbl_804792A4[];
extern void *lbl_805627E0;
void fn_800B5778();
void *fn_800B57F0();
}
extern "C" {
void fn_800B5750(){
 fn_80066188((int)fn_800B5778);
}
void fn_800B5778(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805627E0,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B57F0,(int)lbl_804792A4,24,(int)fn_800B5670,(int)fn_800B5810,0,(int)lbl_80479298);
}
void *fn_800B57F0(){return fn_800B5634();}
}
#pragma pop
