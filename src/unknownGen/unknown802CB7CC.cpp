#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CB8B4();
extern void *lbl_80534EF0;
}
extern "C" {
void *fn_802CB7CC(){
 if(!lbl_80534EF0 || !(reinterpret_cast<unsigned int *>(lbl_80534EF0)[0x24/4]&4)) fn_802CB8B4();
 return lbl_80534EF0;
}
}
#pragma pop
