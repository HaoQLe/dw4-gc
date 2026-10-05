#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C92B0();
extern void *lbl_80534E08;
}
extern "C" {
void *fn_802C9164(){
 if(!lbl_80534E08 || !(reinterpret_cast<unsigned int *>(lbl_80534E08)[0x24/4]&4)) fn_802C92B0();
 return lbl_80534E08;
}
}
#pragma pop
