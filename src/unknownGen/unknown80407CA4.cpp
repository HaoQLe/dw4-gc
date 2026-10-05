#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80407E08();
extern void *lbl_8055CA64;
}
extern "C" {
void *fn_80407CA4(){
 if(!lbl_8055CA64 || !(reinterpret_cast<unsigned int *>(lbl_8055CA64)[0x24/4]&4)) fn_80407E08();
 return lbl_8055CA64;
}
}
#pragma pop
