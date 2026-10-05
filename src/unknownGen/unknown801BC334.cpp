#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801BC4D8();
extern void *lbl_80564DD8;
}
extern "C" {
void *fn_801BC334(){
 if(!lbl_80564DD8 || !(reinterpret_cast<unsigned int *>(lbl_80564DD8)[0x24/4]&4)) fn_801BC4D8();
 return lbl_80564DD8;
}
}
#pragma pop
