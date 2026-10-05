#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void *fn_801ADBD4();
void fn_801ADC10();
void fn_801ADE84();
void fn_801BF938();
extern char lbl_804ABEB8[];
extern char lbl_805601AC[8];
extern void *lbl_805647B0;
void fn_801ADDF0();
void *fn_801ADE64();
}
extern "C" {
void fn_801ADDC8(){
 fn_80066188((int)fn_801ADDF0);
}
void fn_801ADDF0(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805647B0,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801ADE64,(int)lbl_804ABEB8,36,(int)fn_801ADC10,(int)fn_801ADE84,0,(int)lbl_805601AC);
}
void *fn_801ADE64(){return fn_801ADBD4();}
}
#pragma pop
