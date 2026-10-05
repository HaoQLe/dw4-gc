#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803453B4();
extern void *lbl_80536838;
}
extern "C" {
void *fn_803452CC(){
 if(!lbl_80536838 || !(reinterpret_cast<unsigned int *>(lbl_80536838)[0x24/4]&4)) fn_803453B4();
 return lbl_80536838;
}
}
#pragma pop
