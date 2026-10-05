#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80114844();
extern void *lbl_80563830;
}
extern "C" {
void *fn_80114710(){
 if(!lbl_80563830 || !(reinterpret_cast<unsigned int *>(lbl_80563830)[0x24/4]&4)) fn_80114844();
 return lbl_80563830;
}
}
#pragma pop
