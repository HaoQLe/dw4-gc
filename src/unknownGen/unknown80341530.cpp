#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803415F0();
extern void *lbl_805366D4;
}
extern "C" {
void *fn_80341530(){
 if(!lbl_805366D4 || !(reinterpret_cast<unsigned int *>(lbl_805366D4)[0x24/4]&4)) fn_803415F0();
 return lbl_805366D4;
}
}
#pragma pop
