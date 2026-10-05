#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8002AE84();
extern void *lbl_80561818;
}
extern "C" {
void *fn_8002AD54(){
 if(!lbl_80561818 || !(reinterpret_cast<unsigned int *>(lbl_80561818)[0x24/4]&4)) fn_8002AE84();
 return lbl_80561818;
}
}
#pragma pop
