#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80134BC4();
extern void *lbl_80563C54;
}
extern "C" {
void *fn_80134A48(){
 if(!lbl_80563C54 || !(reinterpret_cast<unsigned int *>(lbl_80563C54)[0x24/4]&4)) fn_80134BC4();
 return lbl_80563C54;
}
}
#pragma pop
