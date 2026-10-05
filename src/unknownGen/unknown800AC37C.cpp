#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800AC458();
extern void *lbl_80562430;
}
extern "C" {
void *fn_800AC37C(){
 if(!lbl_80562430 || !(reinterpret_cast<unsigned int *>(lbl_80562430)[0x24/4]&4)) fn_800AC458();
 return lbl_80562430;
}
}
#pragma pop
