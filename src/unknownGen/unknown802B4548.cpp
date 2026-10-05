#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_805345EC;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802B4548(){
 if(!lbl_805345EC) lbl_805345EC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805345EC;
}
}
#pragma pop
