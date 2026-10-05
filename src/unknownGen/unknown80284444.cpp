#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80284490();
extern void *lbl_80515C58;
}
extern "C" {
void *fn_80284444(){
 if(!lbl_80515C58 || !(reinterpret_cast<unsigned int *>(lbl_80515C58)[0x24/4]&4)) fn_80284490();
 return lbl_80515C58;
}
}
#pragma pop
