#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803286F8();
extern void *lbl_80535D60;
}
extern "C" {
void *fn_803286AC(){
 if(!lbl_80535D60 || !(reinterpret_cast<unsigned int *>(lbl_80535D60)[0x24/4]&4)) fn_803286F8();
 return lbl_80535D60;
}
}
#pragma pop
