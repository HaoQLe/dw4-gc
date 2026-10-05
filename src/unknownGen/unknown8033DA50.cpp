#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_80536458;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_8033DA50(){
 if(!lbl_80536458) lbl_80536458=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536458;
}
}
#pragma pop
