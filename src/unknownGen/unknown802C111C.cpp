#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C1278();
extern void *lbl_80534A6C;
}
extern "C" {
void *fn_802C111C(){
 if(!lbl_80534A6C || !(reinterpret_cast<unsigned int *>(lbl_80534A6C)[0x24/4]&4)) fn_802C1278();
 return lbl_80534A6C;
}
}
#pragma pop
