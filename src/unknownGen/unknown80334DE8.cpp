#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80334F74();
extern void *lbl_80535FE0;
}
extern "C" {
void *fn_80334DE8(){
 if(!lbl_80535FE0 || !(reinterpret_cast<unsigned int *>(lbl_80535FE0)[0x24/4]&4)) fn_80334F74();
 return lbl_80535FE0;
}
}
#pragma pop
