#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80139F84();
extern void *lbl_80563E18;
}
extern "C" {
void *fn_80139DD0(){
 if(!lbl_80563E18 || !(reinterpret_cast<unsigned int *>(lbl_80563E18)[0x24/4]&4)) fn_80139F84();
 return lbl_80563E18;
}
}
#pragma pop
