#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8014547C();
extern void *lbl_80564154;
}
extern "C" {
void *fn_8014536C(){
 if(!lbl_80564154 || !(reinterpret_cast<unsigned int *>(lbl_80564154)[0x24/4]&4)) fn_8014547C();
 return lbl_80564154;
}
}
#pragma pop
