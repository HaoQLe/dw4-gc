#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BFB98();
extern void *lbl_805349C0;
}
extern "C" {
void *beSvSlotGC_getMeta(){
 if(!lbl_805349C0 || !(reinterpret_cast<unsigned int *>(lbl_805349C0)[0x24/4]&4)) fn_802BFB98();
 return lbl_805349C0;
}
}
#pragma pop
