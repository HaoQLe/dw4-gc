#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E5D98();
extern void *lbl_805357D0;
}
extern "C" {
void *fn_802E5CD8(){
 if(!lbl_805357D0 || !(reinterpret_cast<unsigned int *>(lbl_805357D0)[0x24/4]&4)) fn_802E5D98();
 return lbl_805357D0;
}
}
#pragma pop
