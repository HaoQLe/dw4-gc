#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8014E5EC();
extern void *lbl_80564440;
}
extern "C" {
void *fn_8014E3F8(){
 if(!lbl_80564440 || !(reinterpret_cast<unsigned int *>(lbl_80564440)[0x24/4]&4)) fn_8014E5EC();
 return lbl_80564440;
}
}
#pragma pop
