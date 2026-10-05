#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8010EFD4();
extern void *lbl_80563628;
}
extern "C" {
void *fn_8010EEF0(){
 if(!lbl_80563628 || !(reinterpret_cast<unsigned int *>(lbl_80563628)[0x24/4]&4)) fn_8010EFD4();
 return lbl_80563628;
}
}
#pragma pop
