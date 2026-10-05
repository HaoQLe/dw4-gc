#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C0B3C();
extern void *lbl_80534A50;
}
extern "C" {
void *fn_802C0960(){
 if(!lbl_80534A50 || !(reinterpret_cast<unsigned int *>(lbl_80534A50)[0x24/4]&4)) fn_802C0B3C();
 return lbl_80534A50;
}
}
#pragma pop
