#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D8340();
extern void *lbl_805352EC;
}
extern "C" {
void *fn_802D8280(){
 if(!lbl_805352EC || !(reinterpret_cast<unsigned int *>(lbl_805352EC)[0x24/4]&4)) fn_802D8340();
 return lbl_805352EC;
}
}
#pragma pop
