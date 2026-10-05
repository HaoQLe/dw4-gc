#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801B8CB0();
extern void *lbl_80564C54;
}
extern "C" {
void *fn_801B8914(){
 if(!lbl_80564C54 || !(reinterpret_cast<unsigned int *>(lbl_80564C54)[0x24/4]&4)) fn_801B8CB0();
 return lbl_80564C54;
}
}
#pragma pop
