#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80145FE0();
extern void *lbl_80564170;
}
extern "C" {
void *fn_80145ED0(){
 if(!lbl_80564170 || !(reinterpret_cast<unsigned int *>(lbl_80564170)[0x24/4]&4)) fn_80145FE0();
 return lbl_80564170;
}
}
#pragma pop
