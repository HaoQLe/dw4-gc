#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802AAC90();
extern void *lbl_80534358;
}
extern "C" {
void *fn_802AAB4C(){
 if(!lbl_80534358 || !(reinterpret_cast<unsigned int *>(lbl_80534358)[0x24/4]&4)) fn_802AAC90();
 return lbl_80534358;
}
}
#pragma pop
