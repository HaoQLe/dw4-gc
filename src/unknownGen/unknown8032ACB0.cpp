#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8032AE54();
extern void *lbl_80535DC0;
}
extern "C" {
void *fn_8032ACB0(){
 if(!lbl_80535DC0 || !(reinterpret_cast<unsigned int *>(lbl_80535DC0)[0x24/4]&4)) fn_8032AE54();
 return lbl_80535DC0;
}
}
#pragma pop
