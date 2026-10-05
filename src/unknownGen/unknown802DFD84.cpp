#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E001C();
extern void *lbl_80535584;
}
extern "C" {
void *fn_802DFD84(){
 if(!lbl_80535584 || !(reinterpret_cast<unsigned int *>(lbl_80535584)[0x24/4]&4)) fn_802E001C();
 return lbl_80535584;
}
}
#pragma pop
