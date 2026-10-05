#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8032A900();
extern void *lbl_80535DA0;
}
extern "C" {
void *fn_8032A8B4(){
 if(!lbl_80535DA0 || !(reinterpret_cast<unsigned int *>(lbl_80535DA0)[0x24/4]&4)) fn_8032A900();
 return lbl_80535DA0;
}
}
#pragma pop
