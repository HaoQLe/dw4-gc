#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803352CC();
extern void *lbl_80535FF8;
}
extern "C" {
void *fn_8033520C(){
 if(!lbl_80535FF8 || !(reinterpret_cast<unsigned int *>(lbl_80535FF8)[0x24/4]&4)) fn_803352CC();
 return lbl_80535FF8;
}
}
#pragma pop
