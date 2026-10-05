#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800B3950();
extern void *lbl_80562734;
}
extern "C" {
void *fn_800B375C(){
 if(!lbl_80562734 || !(reinterpret_cast<unsigned int *>(lbl_80562734)[0x24/4]&4)) fn_800B3950();
 return lbl_80562734;
}
}
#pragma pop
