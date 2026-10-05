#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_801159FC();
void fn_80115AA4();
void fn_803250AC();
void *fn_803454F0();
void fn_8034553C();
void fn_80345698();
extern char lbl_804556D0[];
extern char lbl_804E419C[];
extern char lbl_80536840[];
void fn_803455FC();
void *fn_80345678();
}
extern "C" {
void fn_803455D4(){
 fn_80066188((int)fn_803455FC);
}
void fn_803455FC(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536840,(int)fn_80115AA4,(int)fn_801159FC,(int)fn_80345678,(int)lbl_804556D0,16,(int)fn_8034553C,(int)fn_80345698,0,(int)lbl_804E419C);
}
void *fn_80345678(){return fn_803454F0();}
}
#pragma pop
