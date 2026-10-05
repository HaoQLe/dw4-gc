#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013DECC();
extern void *lbl_80563F54;
}
extern "C" {
void *fn_8013DDC4(){
 if(!lbl_80563F54 || !(reinterpret_cast<unsigned int *>(lbl_80563F54)[0x24/4]&4)) fn_8013DECC();
 return lbl_80563F54;
}
}
#pragma pop
