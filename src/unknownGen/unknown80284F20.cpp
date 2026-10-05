#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80284FE0();
extern void *lbl_80515C90;
}
extern "C" {
void *fn_80284F20(){
 if(!lbl_80515C90 || !(reinterpret_cast<unsigned int *>(lbl_80515C90)[0x24/4]&4)) fn_80284FE0();
 return lbl_80515C90;
}
}
#pragma pop
