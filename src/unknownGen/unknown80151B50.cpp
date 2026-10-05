#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80151C94();
extern void *lbl_80564524;
}
extern "C" {
void *fn_80151B50(){
 if(!lbl_80564524 || !(reinterpret_cast<unsigned int *>(lbl_80564524)[0x24/4]&4)) fn_80151C94();
 return lbl_80564524;
}
}
#pragma pop
