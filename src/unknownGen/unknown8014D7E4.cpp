#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8014D960();
extern void *lbl_80564400;
}
extern "C" {
void *fn_8014D7E4(){
 if(!lbl_80564400 || !(reinterpret_cast<unsigned int *>(lbl_80564400)[0x24/4]&4)) fn_8014D960();
 return lbl_80564400;
}
}
#pragma pop
