#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80030A14();
extern void *lbl_80561B8C;
}
extern "C" {
void *fn_80030870(){
 if(!lbl_80561B8C || !(reinterpret_cast<unsigned int *>(lbl_80561B8C)[0x24/4]&4)) fn_80030A14();
 return lbl_80561B8C;
}
}
#pragma pop
