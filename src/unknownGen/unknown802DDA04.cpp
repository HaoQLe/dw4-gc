#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DDD74();
extern void *lbl_80535484;
}
extern "C" {
void *fn_802DDA04(){
 if(!lbl_80535484 || !(reinterpret_cast<unsigned int *>(lbl_80535484)[0x24/4]&4)) fn_802DDD74();
 return lbl_80535484;
}
}
#pragma pop
