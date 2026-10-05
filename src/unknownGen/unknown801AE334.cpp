#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801AE970();
extern void *lbl_805621F4;
extern void *lbl_805647C8;
}
extern "C" {
void *fn_801AE334(){
 if(!lbl_805647C8) lbl_805647C8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805647C8;
}
void *fn_801AE370(){
 if(!lbl_805647C8 || !(reinterpret_cast<unsigned int *>(lbl_805647C8)[0x24/4]&4)) fn_801AE970();
 return lbl_805647C8;
}
}
#pragma pop
