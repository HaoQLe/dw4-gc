#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80332364();
void fn_803323B0();
void *fn_80332910();
void fn_80332E4C();
extern char lbl_80453B8C[];
extern char lbl_80535F30[];
void fn_80332884();
void *fn_803328F0();
}
extern "C" {
void fn_8033285C(){
 fn_80066188((int)fn_80332884);
}
void fn_80332884(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535F30,(int)fn_80332E4C,(int)fn_80332910,(int)fn_803328F0,(int)lbl_80453B8C,124,(int)fn_803323B0,0,0,0);
}
void *fn_803328F0(){return fn_80332364();}
}
#pragma pop
