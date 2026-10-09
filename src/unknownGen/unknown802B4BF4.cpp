#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B4D90();
extern void *lbl_80534618;
}
extern "C" {
void *beWaterPlainInfo_getMeta(){
 if(!lbl_80534618 || !(reinterpret_cast<unsigned int *>(lbl_80534618)[0x24/4]&4)) fn_802B4D90();
 return lbl_80534618;
}
}
#pragma pop
