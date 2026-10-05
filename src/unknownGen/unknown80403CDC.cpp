#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80404638();
extern void *lbl_8055C788;
}
extern "C" {
void *fn_80403CDC(){
 if(!lbl_8055C788 || !(reinterpret_cast<unsigned int *>(lbl_8055C788)[0x24/4]&4)) fn_80404638();
 return lbl_8055C788;
}
}
#pragma pop
