#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DE77C();
extern void *lbl_805354C8;
}
extern "C" {
void *fn_802DE6E8(){
 if(!lbl_805354C8 || !(reinterpret_cast<unsigned int *>(lbl_805354C8)[0x24/4]&4)) fn_802DE77C();
 return lbl_805354C8;
}
}
#pragma pop
