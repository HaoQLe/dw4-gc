#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80344F80();
extern void *lbl_80536828;
}
extern "C" {
void *fn_80344DF4(){
 if(!lbl_80536828 || !(reinterpret_cast<unsigned int *>(lbl_80536828)[0x24/4]&4)) fn_80344F80();
 return lbl_80536828;
}
}
#pragma pop
