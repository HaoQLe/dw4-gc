#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80113984();
extern void *lbl_805621F4;
extern void *lbl_805637F4;
}
extern "C" {
void *fn_80113894(){
 if(!lbl_805637F4) lbl_805637F4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805637F4;
}
void *fn_801138D0(){
 if(!lbl_805637F4 || !(reinterpret_cast<unsigned int *>(lbl_805637F4)[0x24/4]&4)) fn_80113984();
 return lbl_805637F4;
}
}
#pragma pop
