#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801BFCB0();
void fn_801BFCEC();
void fn_801BFE30();
extern char lbl_804AF520[];
extern char lbl_80560630[8];
extern void *lbl_80564EDC;
void fn_801BFD9C();
void *fn_801BFE10();
}
extern "C" {
void fn_801BFD74(){
 fn_80066188((int)fn_801BFD9C);
}
void fn_801BFD9C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564EDC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801BFE10,(int)lbl_804AF520,28,(int)fn_801BFCEC,(int)fn_801BFE30,0,(int)lbl_80560630);
}
void *fn_801BFE10(){return fn_801BFCB0();}
}
#pragma pop
