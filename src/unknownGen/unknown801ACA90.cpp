#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801ACC68();
extern void *lbl_80564728;
}
extern "C" {
void *igTimeTransform1_5_getMeta(){
 if(!lbl_80564728 || !(reinterpret_cast<unsigned int *>(lbl_80564728)[0x24/4]&4)) fn_801ACC68();
 return lbl_80564728;
}
}
#pragma pop
