#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E42F4();
extern void *lbl_80535724;
}
extern "C" {
void *fn_802E420C(){
 if(!lbl_80535724 || !(reinterpret_cast<unsigned int *>(lbl_80535724)[0x24/4]&4)) fn_802E42F4();
 return lbl_80535724;
}
}
#pragma pop
