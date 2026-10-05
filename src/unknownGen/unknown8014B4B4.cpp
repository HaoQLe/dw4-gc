#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8014B64C();
extern void *lbl_80564318;
}
extern "C" {
void *fn_8014B4B4(){
 if(!lbl_80564318 || !(reinterpret_cast<unsigned int *>(lbl_80564318)[0x24/4]&4)) fn_8014B64C();
 return lbl_80564318;
}
}
#pragma pop
