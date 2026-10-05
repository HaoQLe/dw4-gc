#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_805361F4;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_8033A250(){
 if(!lbl_805361F4) lbl_805361F4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805361F4;
}
}
#pragma pop
