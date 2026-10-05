#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80028634();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_805616DC;
extern void *lbl_805619F8;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_800284EC(){return lbl_805619F8;}
void *fn_800284F4(){
 if(!lbl_805616DC) lbl_805616DC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805616DC;
}
void *fn_80028530(){
 if(!lbl_805616DC || !(reinterpret_cast<unsigned int *>(lbl_805616DC)[0x24/4]&4)) fn_80028634();
 return lbl_805616DC;
}
}
#pragma pop
