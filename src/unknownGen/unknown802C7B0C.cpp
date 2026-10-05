#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C7C30();
extern void *lbl_80534D74;
}
extern "C" {
void *fn_802C7B0C(){
 if(!lbl_80534D74 || !(reinterpret_cast<unsigned int *>(lbl_80534D74)[0x24/4]&4)) fn_802C7C30();
 return lbl_80534D74;
}
}
#pragma pop
