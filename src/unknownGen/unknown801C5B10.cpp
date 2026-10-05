#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801C5C84();
extern void *lbl_805651FC;
}
extern "C" {
void *fn_801C5B10(){
 if(!lbl_805651FC || !(reinterpret_cast<unsigned int *>(lbl_805651FC)[0x24/4]&4)) fn_801C5C84();
 return lbl_805651FC;
}
}
#pragma pop
