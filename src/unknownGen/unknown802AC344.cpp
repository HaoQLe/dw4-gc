#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802AC404();
extern void *lbl_80534404;
}
extern "C" {
void *fn_802AC344(){
 if(!lbl_80534404 || !(reinterpret_cast<unsigned int *>(lbl_80534404)[0x24/4]&4)) fn_802AC404();
 return lbl_80534404;
}
}
#pragma pop
