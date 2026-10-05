#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003A61C();
extern void *lbl_80562014;
}
extern "C" {
void *fn_8003A518(){
 if(!lbl_80562014 || !(reinterpret_cast<unsigned int *>(lbl_80562014)[0x24/4]&4)) fn_8003A61C();
 return lbl_80562014;
}
}
#pragma pop
