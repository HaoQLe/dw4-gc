#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E49F0();
extern void *lbl_80535734;
}
extern "C" {
void *fn_802E48C0(){
 if(!lbl_80535734 || !(reinterpret_cast<unsigned int *>(lbl_80535734)[0x24/4]&4)) fn_802E49F0();
 return lbl_80535734;
}
}
#pragma pop
