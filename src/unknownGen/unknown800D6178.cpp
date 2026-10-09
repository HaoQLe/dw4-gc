#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_800D6740();
extern void *lbl_805621F4;
extern void *lbl_80563100;
}
extern "C" {
void *fn_800D6178(){
 if(!lbl_80563100) lbl_80563100=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563100;
}
void *igGamecubeVisualContext_getMeta(){
 if(!lbl_80563100 || !(reinterpret_cast<unsigned int *>(lbl_80563100)[0x24/4]&4)) fn_800D6740();
 return lbl_80563100;
}
}
#pragma pop
