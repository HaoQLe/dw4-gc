#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80284D14();
extern void *lbl_80515C88;
}
extern "C" {
void *fn_80284C54(){
 if(!lbl_80515C88 || !(reinterpret_cast<unsigned int *>(lbl_80515C88)[0x24/4]&4)) fn_80284D14();
 return lbl_80515C88;
}
}
#pragma pop
