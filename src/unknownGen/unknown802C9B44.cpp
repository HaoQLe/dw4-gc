#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C9C40();
extern void *lbl_80534E38;
}
extern "C" {
void *fn_802C9B44(){
 if(!lbl_80534E38 || !(reinterpret_cast<unsigned int *>(lbl_80534E38)[0x24/4]&4)) fn_802C9C40();
 return lbl_80534E38;
}
}
#pragma pop
