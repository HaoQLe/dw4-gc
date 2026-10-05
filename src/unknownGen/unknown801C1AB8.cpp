#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801C1C04();
extern void *lbl_80564F94;
}
extern "C" {
void *fn_801C1AB8(){
 if(!lbl_80564F94 || !(reinterpret_cast<unsigned int *>(lbl_80564F94)[0x24/4]&4)) fn_801C1C04();
 return lbl_80564F94;
}
}
#pragma pop
