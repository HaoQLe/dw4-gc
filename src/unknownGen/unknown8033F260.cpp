#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8033F37C();
extern void *lbl_80536560;
}
extern "C" {
void *fn_8033F260(){
 if(!lbl_80536560 || !(reinterpret_cast<unsigned int *>(lbl_80536560)[0x24/4]&4)) fn_8033F37C();
 return lbl_80536560;
}
}
#pragma pop
