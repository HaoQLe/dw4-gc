#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8033B978();
extern void *lbl_80536238;
}
extern "C" {
void *fn_8033B7DC(){
 if(!lbl_80536238 || !(reinterpret_cast<unsigned int *>(lbl_80536238)[0x24/4]&4)) fn_8033B978();
 return lbl_80536238;
}
}
#pragma pop
