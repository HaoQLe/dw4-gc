#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_8055CAB0;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_804083CC(){
 if(!lbl_8055CAB0) lbl_8055CAB0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8055CAB0;
}
}
#pragma pop
