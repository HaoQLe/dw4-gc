#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801348AC();
extern void *lbl_80563C40;
}
extern "C" {
void *fn_80134714(){
 if(!lbl_80563C40 || !(reinterpret_cast<unsigned int *>(lbl_80563C40)[0x24/4]&4)) fn_801348AC();
 return lbl_80563C40;
}
}
#pragma pop
