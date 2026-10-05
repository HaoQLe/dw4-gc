#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_800D1064();
extern void *lbl_805621F4;
extern void *lbl_80562E9C;
}
extern "C" {
void *fn_800D0E7C(){
 if(!lbl_80562E9C) lbl_80562E9C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562E9C;
}
void *fn_800D0EB8(){
 if(!lbl_80562E9C || !(reinterpret_cast<unsigned int *>(lbl_80562E9C)[0x24/4]&4)) fn_800D1064();
 return lbl_80562E9C;
}
}
#pragma pop
