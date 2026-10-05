#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801AAA78();
void fn_801AAAB4();
void fn_801AABFC();
void fn_801AACA8();
extern char lbl_804AB3D4[];
extern char lbl_80560090[8];
extern void *lbl_80564668;
void fn_801AAB64();
void *fn_801AABDC();
}
extern "C" {
void fn_801AAB3C(){
 fn_80066188((int)fn_801AAB64);
}
void fn_801AAB64(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564668,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801AABDC,(int)lbl_804AB3D4,32,(int)fn_801AAAB4,(int)fn_801AABFC,(int)fn_801AACA8,(int)lbl_80560090);
}
void *fn_801AABDC(){return fn_801AAA78();}
}
#pragma pop
