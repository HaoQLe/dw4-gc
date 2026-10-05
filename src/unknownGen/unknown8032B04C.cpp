#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8032B2B4();
extern void *lbl_80535DC8;
}
extern "C" {
void *fn_8032B04C(){
 if(!lbl_80535DC8 || !(reinterpret_cast<unsigned int *>(lbl_80535DC8)[0x24/4]&4)) fn_8032B2B4();
 return lbl_80535DC8;
}
}
#pragma pop
