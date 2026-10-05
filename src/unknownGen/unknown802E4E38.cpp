#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E4EF8();
extern void *lbl_80535744;
}
extern "C" {
void *fn_802E4E38(){
 if(!lbl_80535744 || !(reinterpret_cast<unsigned int *>(lbl_80535744)[0x24/4]&4)) fn_802E4EF8();
 return lbl_80535744;
}
}
#pragma pop
