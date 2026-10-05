#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_80216620();
void *fn_80216898();
void fn_802168D4();
void fn_80216A18();
extern char lbl_804BA318[];
extern char lbl_80560B78[8];
extern void *lbl_805659DC;
void fn_80216984();
void *fn_802169F8();
}
extern "C" {
void fn_8021695C(){
 fn_80066188((int)fn_80216984);
}
void fn_80216984(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_805659DC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802169F8,(int)lbl_804BA318,12,(int)fn_802168D4,(int)fn_80216A18,0,(int)lbl_80560B78);
}
void *fn_802169F8(){return fn_80216898();}
}
#pragma pop
