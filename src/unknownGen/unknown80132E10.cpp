#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013303C();
extern void *lbl_80563BB4;
}
extern "C" {
void *fn_80132E10(){
 if(!lbl_80563BB4 || !(reinterpret_cast<unsigned int *>(lbl_80563BB4)[0x24/4]&4)) fn_8013303C();
 return lbl_80563BB4;
}
}
#pragma pop
