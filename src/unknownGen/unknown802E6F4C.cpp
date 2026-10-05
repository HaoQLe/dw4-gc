#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E707C();
extern void *lbl_80535820;
}
extern "C" {
void *fn_802E6F4C(){
 if(!lbl_80535820 || !(reinterpret_cast<unsigned int *>(lbl_80535820)[0x24/4]&4)) fn_802E707C();
 return lbl_80535820;
}
}
#pragma pop
