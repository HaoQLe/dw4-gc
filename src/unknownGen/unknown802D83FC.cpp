#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D84E4();
extern void *lbl_805352F0;
}
extern "C" {
void *fn_802D83FC(){
 if(!lbl_805352F0 || !(reinterpret_cast<unsigned int *>(lbl_805352F0)[0x24/4]&4)) fn_802D84E4();
 return lbl_805352F0;
}
}
#pragma pop
