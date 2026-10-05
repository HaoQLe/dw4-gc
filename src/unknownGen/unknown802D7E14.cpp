#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D7ED4();
extern void *lbl_805352E0;
}
extern "C" {
void *fn_802D7E14(){
 if(!lbl_805352E0 || !(reinterpret_cast<unsigned int *>(lbl_805352E0)[0x24/4]&4)) fn_802D7ED4();
 return lbl_805352E0;
}
}
#pragma pop
