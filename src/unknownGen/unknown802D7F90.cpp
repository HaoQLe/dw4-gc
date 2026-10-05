#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D80C0();
extern void *lbl_805352E4;
}
extern "C" {
void *fn_802D7F90(){
 if(!lbl_805352E4 || !(reinterpret_cast<unsigned int *>(lbl_805352E4)[0x24/4]&4)) fn_802D80C0();
 return lbl_805352E4;
}
}
#pragma pop
