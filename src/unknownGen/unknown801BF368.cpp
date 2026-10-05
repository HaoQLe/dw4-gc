#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801BF5B4();
extern void *lbl_80564EC8;
}
extern "C" {
void *fn_801BF368(){
 if(!lbl_80564EC8 || !(reinterpret_cast<unsigned int *>(lbl_80564EC8)[0x24/4]&4)) fn_801BF5B4();
 return lbl_80564EC8;
}
}
#pragma pop
