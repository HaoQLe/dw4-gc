#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80343EA4();
extern void *lbl_80536794;
}
extern "C" {
void *fn_80343DE4(){
 if(!lbl_80536794 || !(reinterpret_cast<unsigned int *>(lbl_80536794)[0x24/4]&4)) fn_80343EA4();
 return lbl_80536794;
}
}
#pragma pop
