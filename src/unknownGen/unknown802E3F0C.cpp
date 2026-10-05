#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E3FCC();
extern void *lbl_80535718;
}
extern "C" {
void *fn_802E3F0C(){
 if(!lbl_80535718 || !(reinterpret_cast<unsigned int *>(lbl_80535718)[0x24/4]&4)) fn_802E3FCC();
 return lbl_80535718;
}
}
#pragma pop
