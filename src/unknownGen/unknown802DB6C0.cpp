#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DB798();
extern void *lbl_80535408;
}
extern "C" {
void *fn_802DB6C0(){
 if(!lbl_80535408 || !(reinterpret_cast<unsigned int *>(lbl_80535408)[0x24/4]&4)) fn_802DB798();
 return lbl_80535408;
}
}
#pragma pop
