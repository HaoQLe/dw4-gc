#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80407E08();
extern void *lbl_8055CA64;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80407C50(){
 if(!lbl_8055CA64) lbl_8055CA64=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8055CA64;
}
void *igViewManager_getMeta(){
 if(!lbl_8055CA64 || !(reinterpret_cast<unsigned int *>(lbl_8055CA64)[0x24/4]&4)) fn_80407E08();
 return lbl_8055CA64;
}
}
#pragma pop
