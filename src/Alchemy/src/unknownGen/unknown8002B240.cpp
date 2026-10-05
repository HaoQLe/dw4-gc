#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8002B380();
extern void *lbl_80561848;
}
extern "C" {
void *fn_8002B240(){
 if(!lbl_80561848 || !(reinterpret_cast<unsigned int *>(lbl_80561848)[0x24/4]&4)) fn_8002B380();
 return lbl_80561848;
}
}
#pragma pop
