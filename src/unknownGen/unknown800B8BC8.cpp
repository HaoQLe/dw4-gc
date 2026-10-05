#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_800B8D58();
extern void *lbl_805621F4;
extern void *lbl_80562948;
}
extern "C" {
void *fn_800B8BC8(){
 if(!lbl_80562948) lbl_80562948=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562948;
}
void *fn_800B8C04(){
 if(!lbl_80562948 || !(reinterpret_cast<unsigned int *>(lbl_80562948)[0x24/4]&4)) fn_800B8D58();
 return lbl_80562948;
}
}
#pragma pop
