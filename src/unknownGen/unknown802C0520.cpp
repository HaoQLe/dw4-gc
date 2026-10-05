#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C0714();
extern void *lbl_80534A04;
}
extern "C" {
void *fn_802C0520(){
 if(!lbl_80534A04 || !(reinterpret_cast<unsigned int *>(lbl_80534A04)[0x24/4]&4)) fn_802C0714();
 return lbl_80534A04;
}
}
#pragma pop
