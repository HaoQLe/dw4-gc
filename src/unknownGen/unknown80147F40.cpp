#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801480BC();
extern void *lbl_80564244;
}
extern "C" {
void *fn_80147F40(){
 if(!lbl_80564244 || !(reinterpret_cast<unsigned int *>(lbl_80564244)[0x24/4]&4)) fn_801480BC();
 return lbl_80564244;
}
}
#pragma pop
