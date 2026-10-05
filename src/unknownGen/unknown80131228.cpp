#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80131328();
extern void *lbl_805621F4;
extern void *lbl_80563B00;
}
extern "C" {
void *fn_80131228(){
 if(!lbl_80563B00) lbl_80563B00=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563B00;
}
void *fn_80131264(){
 if(!lbl_80563B00 || !(reinterpret_cast<unsigned int *>(lbl_80563B00)[0x24/4]&4)) fn_80131328();
 return lbl_80563B00;
}
}
#pragma pop
