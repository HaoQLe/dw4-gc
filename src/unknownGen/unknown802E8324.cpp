#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E85F0();
extern void *lbl_80535888;
}
extern "C" {
void *fn_802E8324(){
 if(!lbl_80535888 || !(reinterpret_cast<unsigned int *>(lbl_80535888)[0x24/4]&4)) fn_802E85F0();
 return lbl_80535888;
}
}
#pragma pop
