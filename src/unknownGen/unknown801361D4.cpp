#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80136300();
extern void *lbl_80563CC0;
}
extern "C" {
void *fn_801361D4(){
 if(!lbl_80563CC0 || !(reinterpret_cast<unsigned int *>(lbl_80563CC0)[0x24/4]&4)) fn_80136300();
 return lbl_80563CC0;
}
}
#pragma pop
