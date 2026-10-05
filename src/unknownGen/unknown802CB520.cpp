#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CB690();
extern void *lbl_80534EE4;
}
extern "C" {
void *fn_802CB520(){
 if(!lbl_80534EE4 || !(reinterpret_cast<unsigned int *>(lbl_80534EE4)[0x24/4]&4)) fn_802CB690();
 return lbl_80534EE4;
}
}
#pragma pop
