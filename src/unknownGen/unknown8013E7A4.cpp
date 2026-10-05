#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013E8AC();
extern void *lbl_80563F74;
}
extern "C" {
void *fn_8013E7A4(){
 if(!lbl_80563F74 || !(reinterpret_cast<unsigned int *>(lbl_80563F74)[0x24/4]&4)) fn_8013E8AC();
 return lbl_80563F74;
}
}
#pragma pop
