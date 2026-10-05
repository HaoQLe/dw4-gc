#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803438CC();
extern void *lbl_80536768;
}
extern "C" {
void *fn_80343880(){
 if(!lbl_80536768 || !(reinterpret_cast<unsigned int *>(lbl_80536768)[0x24/4]&4)) fn_803438CC();
 return lbl_80536768;
}
}
#pragma pop
