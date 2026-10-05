#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E40D4();
extern void *lbl_8053571C;
}
extern "C" {
void *fn_802E4088(){
 if(!lbl_8053571C || !(reinterpret_cast<unsigned int *>(lbl_8053571C)[0x24/4]&4)) fn_802E40D4();
 return lbl_8053571C;
}
}
#pragma pop
