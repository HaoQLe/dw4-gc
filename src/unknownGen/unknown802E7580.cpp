#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E76CC();
extern void *lbl_80535830;
}
extern "C" {
void *fn_802E7580(){
 if(!lbl_80535830 || !(reinterpret_cast<unsigned int *>(lbl_80535830)[0x24/4]&4)) fn_802E76CC();
 return lbl_80535830;
}
}
#pragma pop
