#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E6E3C();
extern void *lbl_8053581C;
}
extern "C" {
void *fn_802E6D7C(){
 if(!lbl_8053581C || !(reinterpret_cast<unsigned int *>(lbl_8053581C)[0x24/4]&4)) fn_802E6E3C();
 return lbl_8053581C;
}
}
#pragma pop
