#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801136F0();
extern void *lbl_805637D8;
}
extern "C" {
void *fn_801135B4(){
 if(!lbl_805637D8 || !(reinterpret_cast<unsigned int *>(lbl_805637D8)[0x24/4]&4)) fn_801136F0();
 return lbl_805637D8;
}
}
#pragma pop
