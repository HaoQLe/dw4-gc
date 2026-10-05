#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E4C98();
extern void *lbl_8053573C;
}
extern "C" {
void *fn_802E4B54(){
 if(!lbl_8053573C || !(reinterpret_cast<unsigned int *>(lbl_8053573C)[0x24/4]&4)) fn_802E4C98();
 return lbl_8053573C;
}
}
#pragma pop
