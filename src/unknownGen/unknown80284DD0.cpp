#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80284E1C();
extern void *lbl_80515C8C;
}
extern "C" {
void *fn_80284DD0(){
 if(!lbl_80515C8C || !(reinterpret_cast<unsigned int *>(lbl_80515C8C)[0x24/4]&4)) fn_80284E1C();
 return lbl_80515C8C;
}
}
#pragma pop
