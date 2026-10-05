#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B8A24();
extern void *lbl_80534740;
}
extern "C" {
void *fn_802B8820(){
 if(!lbl_80534740 || !(reinterpret_cast<unsigned int *>(lbl_80534740)[0x24/4]&4)) fn_802B8A24();
 return lbl_80534740;
}
}
#pragma pop
