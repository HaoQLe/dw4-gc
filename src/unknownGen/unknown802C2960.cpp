#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C2AEC();
extern void *lbl_80534B24;
}
extern "C" {
void *beOptInfo_getMeta(){
 if(!lbl_80534B24 || !(reinterpret_cast<unsigned int *>(lbl_80534B24)[0x24/4]&4)) fn_802C2AEC();
 return lbl_80534B24;
}
}
#pragma pop
