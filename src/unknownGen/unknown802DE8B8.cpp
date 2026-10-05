#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DE9C0();
extern void *lbl_805354E4;
}
extern "C" {
void *fn_802DE8B8(){
 if(!lbl_805354E4 || !(reinterpret_cast<unsigned int *>(lbl_805354E4)[0x24/4]&4)) fn_802DE9C0();
 return lbl_805354E4;
}
}
#pragma pop
