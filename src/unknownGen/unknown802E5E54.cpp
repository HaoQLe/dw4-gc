#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E6090();
extern void *lbl_805357D4;
}
extern "C" {
void *fn_802E5E54(){
 if(!lbl_805357D4 || !(reinterpret_cast<unsigned int *>(lbl_805357D4)[0x24/4]&4)) fn_802E6090();
 return lbl_805357D4;
}
}
#pragma pop
