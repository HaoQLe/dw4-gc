#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8033EEE8();
extern void *lbl_80536520;
}
extern "C" {
void *fn_8033ECFC(){
 if(!lbl_80536520 || !(reinterpret_cast<unsigned int *>(lbl_80536520)[0x24/4]&4)) fn_8033EEE8();
 return lbl_80536520;
}
}
#pragma pop
