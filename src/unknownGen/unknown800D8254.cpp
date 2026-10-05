#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800D8388();
extern void *lbl_80563440;
}
extern "C" {
void *fn_800D8254(){
 if(!lbl_80563440 || !(reinterpret_cast<unsigned int *>(lbl_80563440)[0x24/4]&4)) fn_800D8388();
 return lbl_80563440;
}
}
#pragma pop
