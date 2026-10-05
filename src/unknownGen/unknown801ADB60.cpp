#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_801ADDC8();
extern void *lbl_805621F4;
extern void *lbl_805647B0;
}
extern "C" {
void *fn_801ADB60(void *object){
 fn_801ADDC8();
 return fn_8006546C(lbl_805647B0,object);
}
void *fn_801ADB98(){
 if(!lbl_805647B0) lbl_805647B0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805647B0;
}
void *fn_801ADBD4(){
 if(!lbl_805647B0 || !(reinterpret_cast<unsigned int *>(lbl_805647B0)[0x24/4]&4)) fn_801ADDC8();
 return lbl_805647B0;
}
}
#pragma pop
