#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802AD7DC();
extern void *lbl_80534490;
}
extern "C" {
void *fn_802AD6F8(){
 if(!lbl_80534490 || !(reinterpret_cast<unsigned int *>(lbl_80534490)[0x24/4]&4)) fn_802AD7DC();
 return lbl_80534490;
}
}
#pragma pop
