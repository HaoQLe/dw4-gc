#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BD210();
extern void *lbl_805348D0;
}
extern "C" {
void *beSvPlatDataGC_getMeta(){
 if(!lbl_805348D0 || !(reinterpret_cast<unsigned int *>(lbl_805348D0)[0x24/4]&4)) fn_802BD210();
 return lbl_805348D0;
}
}
#pragma pop
