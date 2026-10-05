#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8014B330();
extern void *lbl_80564300;
}
extern "C" {
void *fn_8014B160(){
 if(!lbl_80564300 || !(reinterpret_cast<unsigned int *>(lbl_80564300)[0x24/4]&4)) fn_8014B330();
 return lbl_80564300;
}
}
#pragma pop
