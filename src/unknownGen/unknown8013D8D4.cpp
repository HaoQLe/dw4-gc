#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013D9DC();
extern void *lbl_80563F44;
}
extern "C" {
void *fn_8013D8D4(){
 if(!lbl_80563F44 || !(reinterpret_cast<unsigned int *>(lbl_80563F44)[0x24/4]&4)) fn_8013D9DC();
 return lbl_80563F44;
}
}
#pragma pop
