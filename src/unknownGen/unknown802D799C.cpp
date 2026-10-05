#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D7A5C();
extern void *lbl_805352C8;
}
extern "C" {
void *fn_802D799C(){
 if(!lbl_805352C8 || !(reinterpret_cast<unsigned int *>(lbl_805352C8)[0x24/4]&4)) fn_802D7A5C();
 return lbl_805352C8;
}
}
#pragma pop
