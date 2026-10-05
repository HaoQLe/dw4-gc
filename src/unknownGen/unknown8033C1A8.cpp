#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8033C344();
extern void *lbl_80536288;
}
extern "C" {
void *fn_8033C1A8(){
 if(!lbl_80536288 || !(reinterpret_cast<unsigned int *>(lbl_80536288)[0x24/4]&4)) fn_8033C344();
 return lbl_80536288;
}
}
#pragma pop
