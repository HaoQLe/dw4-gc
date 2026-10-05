#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E19D8();
extern void *lbl_80535604;
}
extern "C" {
void *fn_802E17F4(){
 if(!lbl_80535604 || !(reinterpret_cast<unsigned int *>(lbl_80535604)[0x24/4]&4)) fn_802E19D8();
 return lbl_80535604;
}
}
#pragma pop
