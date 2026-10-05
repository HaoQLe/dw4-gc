#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CEFAC();
extern void *lbl_80535014;
}
extern "C" {
void *fn_802CEEEC(){
 if(!lbl_80535014 || !(reinterpret_cast<unsigned int *>(lbl_80535014)[0x24/4]&4)) fn_802CEFAC();
 return lbl_80535014;
}
}
#pragma pop
