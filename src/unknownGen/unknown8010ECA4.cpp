#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_8010EDB4();
extern void *lbl_805621F4;
extern void *lbl_80563618;
}
extern "C" {
void *fn_8010ECA4(){
 if(!lbl_80563618) lbl_80563618=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563618;
}
void *fn_8010ECE0(){
 if(!lbl_80563618 || !(reinterpret_cast<unsigned int *>(lbl_80563618)[0x24/4]&4)) fn_8010EDB4();
 return lbl_80563618;
}
}
#pragma pop
