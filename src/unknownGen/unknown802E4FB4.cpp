#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E50E4();
extern void *lbl_80535748;
}
extern "C" {
void *fn_802E4FB4(){
 if(!lbl_80535748 || !(reinterpret_cast<unsigned int *>(lbl_80535748)[0x24/4]&4)) fn_802E50E4();
 return lbl_80535748;
}
}
#pragma pop
