#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C3804();
extern void *lbl_80534B74;
}
extern "C" {
void *fn_802C3744(){
 if(!lbl_80534B74 || !(reinterpret_cast<unsigned int *>(lbl_80534B74)[0x24/4]&4)) fn_802C3804();
 return lbl_80534B74;
}
}
#pragma pop
