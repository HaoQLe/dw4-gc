#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80135E48();
extern void *lbl_80563CB0;
}
extern "C" {
void *fn_80135D1C(){
 if(!lbl_80563CB0 || !(reinterpret_cast<unsigned int *>(lbl_80563CB0)[0x24/4]&4)) fn_80135E48();
 return lbl_80563CB0;
}
}
#pragma pop
