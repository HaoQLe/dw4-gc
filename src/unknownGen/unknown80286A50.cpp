#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80286C0C();
extern void *lbl_80515D30;
}
extern "C" {
void *fn_80286A50(){
 if(!lbl_80515D30 || !(reinterpret_cast<unsigned int *>(lbl_80515D30)[0x24/4]&4)) fn_80286C0C();
 return lbl_80515D30;
}
}
#pragma pop
