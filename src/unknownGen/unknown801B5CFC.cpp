#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801B617C();
extern void *lbl_805621F4;
extern void *lbl_80564B3C;
}
extern "C" {
void *fn_801B5CFC(){
 if(!lbl_80564B3C) lbl_80564B3C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564B3C;
}
void *igPlanarShadowShader_getMeta(){
 if(!lbl_80564B3C || !(reinterpret_cast<unsigned int *>(lbl_80564B3C)[0x24/4]&4)) fn_801B617C();
 return lbl_80564B3C;
}
}
#pragma pop
