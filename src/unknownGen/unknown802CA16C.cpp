#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802CA280();
extern void *lbl_80534E6C;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802CA16C(){
 if(!lbl_80534E6C) lbl_80534E6C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534E6C;
}
void *beModelCtrlAIMapList_getMeta(){
 if(!lbl_80534E6C || !(reinterpret_cast<unsigned int *>(lbl_80534E6C)[0x24/4]&4)) fn_802CA280();
 return lbl_80534E6C;
}
}
#pragma pop
