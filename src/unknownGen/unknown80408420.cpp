#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_804086E0();
extern void *lbl_8055CAB0;
}
extern "C" {
void *fn_80408420(){
 if(!lbl_8055CAB0 || !(reinterpret_cast<unsigned int *>(lbl_8055CAB0)[0x24/4]&4)) fn_804086E0();
 return lbl_8055CAB0;
}
}
#pragma pop
