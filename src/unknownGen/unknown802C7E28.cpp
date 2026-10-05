#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C7F00();
extern void *lbl_80534D88;
}
extern "C" {
void *fn_802C7E28(){
 if(!lbl_80534D88 || !(reinterpret_cast<unsigned int *>(lbl_80534D88)[0x24/4]&4)) fn_802C7F00();
 return lbl_80534D88;
}
}
#pragma pop
