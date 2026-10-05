#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80284684();
extern void *lbl_80515C70;
}
extern "C" {
void *fn_80284560(){
 if(!lbl_80515C70 || !(reinterpret_cast<unsigned int *>(lbl_80515C70)[0x24/4]&4)) fn_80284684();
 return lbl_80515C70;
}
}
#pragma pop
