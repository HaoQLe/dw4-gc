#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_8055C974;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80406228(){
 if(!lbl_8055C974) lbl_8055C974=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8055C974;
}
}
#pragma pop
