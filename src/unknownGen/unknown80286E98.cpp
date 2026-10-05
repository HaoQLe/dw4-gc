#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80286EE4();
extern void *lbl_80515D38;
}
extern "C" {
void *fn_80286E98(){
 if(!lbl_80515D38 || !(reinterpret_cast<unsigned int *>(lbl_80515D38)[0x24/4]&4)) fn_80286EE4();
 return lbl_80515D38;
}
}
#pragma pop
