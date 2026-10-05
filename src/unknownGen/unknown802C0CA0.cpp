#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C0EA4();
extern void *lbl_80534A5C;
}
extern "C" {
void *fn_802C0CA0(){
 if(!lbl_80534A5C || !(reinterpret_cast<unsigned int *>(lbl_80534A5C)[0x24/4]&4)) fn_802C0EA4();
 return lbl_80534A5C;
}
}
#pragma pop
