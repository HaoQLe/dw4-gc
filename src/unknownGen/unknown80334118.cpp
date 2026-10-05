#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803342BC();
extern void *lbl_80535FB8;
}
extern "C" {
void *fn_80334118(){
 if(!lbl_80535FB8 || !(reinterpret_cast<unsigned int *>(lbl_80535FB8)[0x24/4]&4)) fn_803342BC();
 return lbl_80535FB8;
}
}
#pragma pop
