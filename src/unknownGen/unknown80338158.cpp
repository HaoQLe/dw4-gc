#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803382B4();
extern void *lbl_80536150;
}
extern "C" {
void *fn_80338158(){
 if(!lbl_80536150 || !(reinterpret_cast<unsigned int *>(lbl_80536150)[0x24/4]&4)) fn_803382B4();
 return lbl_80536150;
}
}
#pragma pop
