#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8033E79C();
extern void *lbl_80536504;
}
extern "C" {
void *fn_8033E5F8(){
 if(!lbl_80536504 || !(reinterpret_cast<unsigned int *>(lbl_80536504)[0x24/4]&4)) fn_8033E79C();
 return lbl_80536504;
}
}
#pragma pop
