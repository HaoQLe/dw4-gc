#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801AAB3C();
extern void *lbl_80564668;
}
extern "C" {
void *fn_801AAA78(){
 if(!lbl_80564668 || !(reinterpret_cast<unsigned int *>(lbl_80564668)[0x24/4]&4)) fn_801AAB3C();
 return lbl_80564668;
}
}
#pragma pop
