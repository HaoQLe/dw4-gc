#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801C17D4();
void fn_801C1810();
void fn_801C19D0();
extern char lbl_804AFA4C[];
extern char lbl_804AFA58[];
extern void *lbl_80564F84;
void fn_801C1938();
void *fn_801C19B0();
}
extern "C" {
void fn_801C1910(){
 fn_80066188((int)fn_801C1938);
}
void fn_801C1938(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564F84,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801C19B0,(int)lbl_804AFA58,20,(int)fn_801C1810,(int)fn_801C19D0,0,(int)lbl_804AFA4C);
}
void *fn_801C19B0(){return fn_801C17D4();}
}
#pragma pop
