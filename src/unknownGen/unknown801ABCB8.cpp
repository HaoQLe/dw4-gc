#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801ABEB8();
extern void *lbl_805621F4;
extern void *lbl_805646F8;
}
extern "C" {
void *fn_801ABCB8(){
 if(!lbl_805646F8) lbl_805646F8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805646F8;
}
void *igTransformRecorder_getMeta(){
 if(!lbl_805646F8 || !(reinterpret_cast<unsigned int *>(lbl_805646F8)[0x24/4]&4)) fn_801ABEB8();
 return lbl_805646F8;
}
}
#pragma pop
