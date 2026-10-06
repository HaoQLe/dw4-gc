#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802C92B0();
extern void *lbl_80534E08;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802C9110(){
 if(!lbl_80534E08) lbl_80534E08=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534E08;
}
void *fn_802C9164(){
 if(!lbl_80534E08 || !(reinterpret_cast<unsigned int *>(lbl_80534E08)[0x24/4]&4)) fn_802C92B0();
 return lbl_80534E08;
}
}
#pragma pop
