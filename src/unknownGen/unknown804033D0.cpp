#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80403490();
extern void *lbl_8055C740;
}
extern "C" {
void *fn_804033D0(){
 if(!lbl_8055C740 || !(reinterpret_cast<unsigned int *>(lbl_8055C740)[0x24/4]&4)) fn_80403490();
 return lbl_8055C740;
}
}
#pragma pop
