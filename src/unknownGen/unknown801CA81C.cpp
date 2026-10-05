#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801CA8E0();
extern void *lbl_80565454;
}
extern "C" {
void *fn_801CA81C(){
 if(!lbl_80565454 || !(reinterpret_cast<unsigned int *>(lbl_80565454)[0x24/4]&4)) fn_801CA8E0();
 return lbl_80565454;
}
}
#pragma pop
