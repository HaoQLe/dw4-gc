#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_800D0B24();
extern void *lbl_805621F4;
extern void *lbl_80562E3C;
}
extern "C" {
void *fn_800D0958(){
 if(!lbl_80562E3C) lbl_80562E3C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562E3C;
}
void *fn_800D0994(){
 if(!lbl_80562E3C || !(reinterpret_cast<unsigned int *>(lbl_80562E3C)[0x24/4]&4)) fn_800D0B24();
 return lbl_80562E3C;
}
}
#pragma pop
