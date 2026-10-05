#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E1648();
extern void *lbl_805355E0;
}
extern "C" {
void *fn_802E150C(){
 if(!lbl_805355E0 || !(reinterpret_cast<unsigned int *>(lbl_805355E0)[0x24/4]&4)) fn_802E1648();
 return lbl_805355E0;
}
}
#pragma pop
