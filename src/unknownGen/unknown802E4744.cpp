#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E4804();
extern void *lbl_80535730;
}
extern "C" {
void *fn_802E4744(){
 if(!lbl_80535730 || !(reinterpret_cast<unsigned int *>(lbl_80535730)[0x24/4]&4)) fn_802E4804();
 return lbl_80535730;
}
}
#pragma pop
