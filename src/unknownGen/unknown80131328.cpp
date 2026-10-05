#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8012FC48();
void *fn_80131264();
void fn_801312A0();
void fn_801313E4();
extern char lbl_8049BE94[];
extern char lbl_8055F4EC[8];
extern void *lbl_80563B00;
void fn_80131350();
void *fn_801313C4();
}
extern "C" {
void fn_80131328(){
 fn_80066188((int)fn_80131350);
}
void fn_80131350(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B00,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801313C4,(int)lbl_8049BE94,12,(int)fn_801312A0,(int)fn_801313E4,0,(int)lbl_8055F4EC);
}
void *fn_801313C4(){return fn_80131264();}
}
#pragma pop
