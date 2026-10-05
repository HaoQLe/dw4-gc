#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CAE88();
extern void *lbl_80534EC8;
}
extern "C" {
void *fn_802CADA0(){
 if(!lbl_80534EC8 || !(reinterpret_cast<unsigned int *>(lbl_80534EC8)[0x24/4]&4)) fn_802CAE88();
 return lbl_80534EC8;
}
}
#pragma pop
