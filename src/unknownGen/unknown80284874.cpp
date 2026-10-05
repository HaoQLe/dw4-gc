#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8028494C();
extern void *lbl_80515C7C;
}
extern "C" {
void *fn_80284874(){
 if(!lbl_80515C7C || !(reinterpret_cast<unsigned int *>(lbl_80515C7C)[0x24/4]&4)) fn_8028494C();
 return lbl_80515C7C;
}
}
#pragma pop
