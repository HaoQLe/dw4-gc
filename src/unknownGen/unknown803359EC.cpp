#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80335B90();
extern void *lbl_80536054;
}
extern "C" {
void *fn_803359EC(){
 if(!lbl_80536054 || !(reinterpret_cast<unsigned int *>(lbl_80536054)[0x24/4]&4)) fn_80335B90();
 return lbl_80536054;
}
}
#pragma pop
