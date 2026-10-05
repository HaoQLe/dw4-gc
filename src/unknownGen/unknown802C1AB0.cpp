#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C1CB4();
extern void *lbl_80534A90;
}
extern "C" {
void *fn_802C1AB0(){
 if(!lbl_80534A90 || !(reinterpret_cast<unsigned int *>(lbl_80534A90)[0x24/4]&4)) fn_802C1CB4();
 return lbl_80534A90;
}
}
#pragma pop
