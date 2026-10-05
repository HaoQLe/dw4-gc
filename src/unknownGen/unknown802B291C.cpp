#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B2A78();
extern void *lbl_80534538;
}
extern "C" {
void *fn_802B291C(){
 if(!lbl_80534538 || !(reinterpret_cast<unsigned int *>(lbl_80534538)[0x24/4]&4)) fn_802B2A78();
 return lbl_80534538;
}
}
#pragma pop
