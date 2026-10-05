#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802AC614();
extern void *lbl_80534408;
}
extern "C" {
void *fn_802AC554(){
 if(!lbl_80534408 || !(reinterpret_cast<unsigned int *>(lbl_80534408)[0x24/4]&4)) fn_802AC614();
 return lbl_80534408;
}
}
#pragma pop
