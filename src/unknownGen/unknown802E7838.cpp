#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E7A78();
extern void *lbl_80535838;
}
extern "C" {
void *fn_802E7838(){
 if(!lbl_80535838 || !(reinterpret_cast<unsigned int *>(lbl_80535838)[0x24/4]&4)) fn_802E7A78();
 return lbl_80535838;
}
}
#pragma pop
