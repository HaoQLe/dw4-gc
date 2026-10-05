#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801AFAB4();
void fn_801AFAF0();
void fn_801AFCAC();
void fn_801CA518();
extern char lbl_804AC848[];
extern char lbl_80560254[8];
extern void *lbl_80564894;
extern void *lbl_80565444;
void fn_801AFC10();
void *fn_801AFC84();
void *fn_801AFCA4();
}
extern "C" {
void fn_801AFBE8(){
 fn_80066188((int)fn_801AFC10);
}
void fn_801AFC10(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564894,(int)fn_801CA518,(int)fn_801AFCA4,(int)fn_801AFC84,(int)lbl_804AC848,28,(int)fn_801AFAF0,(int)fn_801AFCAC,0,(int)lbl_80560254);
}
void *fn_801AFC84(){return fn_801AFAB4();}
void *fn_801AFCA4(){return lbl_80565444;}
}
#pragma pop
