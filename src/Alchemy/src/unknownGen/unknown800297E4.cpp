#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80029918();
extern void *lbl_80561738;
}
extern "C" {
void *fn_800297E4(){
 if(!lbl_80561738 || !(reinterpret_cast<unsigned int *>(lbl_80561738)[0x24/4]&4)) fn_80029918();
 return lbl_80561738;
}
}
#pragma pop
