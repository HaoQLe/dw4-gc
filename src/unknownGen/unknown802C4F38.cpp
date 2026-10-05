#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C511C();
extern void *lbl_80534BE4;
}
extern "C" {
void *fn_802C4F38(){
 if(!lbl_80534BE4 || !(reinterpret_cast<unsigned int *>(lbl_80534BE4)[0x24/4]&4)) fn_802C511C();
 return lbl_80534BE4;
}
}
#pragma pop
