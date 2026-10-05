#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_8032B8A4();
void *fn_80333068();
void fn_803330B4();
void fn_80333370();
void fn_80333F14();
extern char lbl_80453C74[];
extern char lbl_80535F68[];
void fn_803332DC();
void *fn_80333350();
}
extern "C" {
void fn_803332B4(){
 fn_80066188((int)fn_803332DC);
}
void fn_803332DC(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535F68,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_80333350,(int)lbl_80453C74,88,(int)fn_803330B4,(int)fn_80333370,0,0);
}
void *fn_80333350(){return fn_80333068();}
}
#pragma pop
