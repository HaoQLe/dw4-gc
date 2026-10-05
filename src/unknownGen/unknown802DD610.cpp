#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DD6F8();
extern void *lbl_80535478;
}
extern "C" {
void *fn_802DD610(){
 if(!lbl_80535478 || !(reinterpret_cast<unsigned int *>(lbl_80535478)[0x24/4]&4)) fn_802DD6F8();
 return lbl_80535478;
}
}
#pragma pop
