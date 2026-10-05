#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800CC038();
extern void *lbl_80562C50;
}
extern "C" {
void *fn_800CBF58(){
 if(!lbl_80562C50 || !(reinterpret_cast<unsigned int *>(lbl_80562C50)[0x24/4]&4)) fn_800CC038();
 return lbl_80562C50;
}
}
#pragma pop
