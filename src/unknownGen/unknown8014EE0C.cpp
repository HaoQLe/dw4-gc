#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8014EF38();
extern void *lbl_80564488;
}
extern "C" {
void *fn_8014EE0C(){
 if(!lbl_80564488 || !(reinterpret_cast<unsigned int *>(lbl_80564488)[0x24/4]&4)) fn_8014EF38();
 return lbl_80564488;
}
}
#pragma pop
