#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C95F8();
extern void *lbl_80534E14;
}
extern "C" {
void *fn_802C94AC(){
 if(!lbl_80534E14 || !(reinterpret_cast<unsigned int *>(lbl_80534E14)[0x24/4]&4)) fn_802C95F8();
 return lbl_80534E14;
}
}
#pragma pop
