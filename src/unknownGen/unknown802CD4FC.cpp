#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CD6E0();
extern void *lbl_80534F70;
}
extern "C" {
void *fn_802CD4FC(){
 if(!lbl_80534F70 || !(reinterpret_cast<unsigned int *>(lbl_80534F70)[0x24/4]&4)) fn_802CD6E0();
 return lbl_80534F70;
}
}
#pragma pop
