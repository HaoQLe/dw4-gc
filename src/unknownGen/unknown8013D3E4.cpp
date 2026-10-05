#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013D4EC();
extern void *lbl_80563F34;
}
extern "C" {
void *fn_8013D3E4(){
 if(!lbl_80563F34 || !(reinterpret_cast<unsigned int *>(lbl_80563F34)[0x24/4]&4)) fn_8013D4EC();
 return lbl_80563F34;
}
}
#pragma pop
