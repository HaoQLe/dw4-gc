#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801AB354();
void fn_801ABB3C();
extern char lbl_804AB764[];
extern char lbl_804AB774[];
extern void *lbl_80564698;
extern void *lbl_805646D0;
void *fn_801ABA3C();
void fn_801ABA78();
void fn_801ABAA0();
void *fn_801ABB14();
void *fn_801ABB34();
}
extern "C" {
void *fn_801ABA3C(){
 if(!lbl_805646D0 || !(reinterpret_cast<unsigned int *>(lbl_805646D0)[0x24/4]&4)) fn_801ABA78();
 return lbl_805646D0;
}
void fn_801ABA78(){
 fn_80066188((int)fn_801ABAA0);
}
void fn_801ABAA0(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_805646D0,(int)fn_801AB354,(int)fn_801ABB34,(int)fn_801ABB14,(int)lbl_804AB774,56,0,(int)fn_801ABB3C,0,(int)lbl_804AB764);
}
void *fn_801ABB14(){return fn_801ABA3C();}
void *fn_801ABB34(){return lbl_80564698;}
}
#pragma pop
