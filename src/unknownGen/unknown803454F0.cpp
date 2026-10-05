#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803455D4();
extern void *lbl_80536840;
}
extern "C" {
void *fn_803454F0(){
 if(!lbl_80536840 || !(reinterpret_cast<unsigned int *>(lbl_80536840)[0x24/4]&4)) fn_803455D4();
 return lbl_80536840;
}
}
#pragma pop
