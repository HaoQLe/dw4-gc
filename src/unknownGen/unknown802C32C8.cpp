#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802C33DC();
extern void *lbl_80534B64;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802C32C8(){
 if(!lbl_80534B64) lbl_80534B64=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534B64;
}
void *beNumVerDataList_getMeta(){
 if(!lbl_80534B64 || !(reinterpret_cast<unsigned int *>(lbl_80534B64)[0x24/4]&4)) fn_802C33DC();
 return lbl_80534B64;
}
}
#pragma pop
