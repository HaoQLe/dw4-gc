#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E458C();
extern void *lbl_80535728;
}
extern "C" {
void *fn_802E43A8(){
 if(!lbl_80535728 || !(reinterpret_cast<unsigned int *>(lbl_80535728)[0x24/4]&4)) fn_802E458C();
 return lbl_80535728;
}
}
#pragma pop
