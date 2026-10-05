#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C40EC();
extern void *lbl_80534B90;
}
extern "C" {
void *fn_802C3F90(){
 if(!lbl_80534B90 || !(reinterpret_cast<unsigned int *>(lbl_80534B90)[0x24/4]&4)) fn_802C40EC();
 return lbl_80534B90;
}
}
#pragma pop
