#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D7C34();
extern void *lbl_805352CC;
}
extern "C" {
void *fn_802D7B18(){
 if(!lbl_805352CC || !(reinterpret_cast<unsigned int *>(lbl_805352CC)[0x24/4]&4)) fn_802D7C34();
 return lbl_805352CC;
}
}
#pragma pop
