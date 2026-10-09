#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801B1B64();
extern void *lbl_805621F4;
extern void *lbl_8056491C;
}
extern "C" {
void *fn_801B183C(){
 if(!lbl_8056491C) lbl_8056491C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056491C;
}
void *igShader_getMeta(){
 if(!lbl_8056491C || !(reinterpret_cast<unsigned int *>(lbl_8056491C)[0x24/4]&4)) fn_801B1B64();
 return lbl_8056491C;
}
}
#pragma pop
