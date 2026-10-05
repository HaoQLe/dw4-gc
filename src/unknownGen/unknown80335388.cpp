#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803354A4();
extern void *lbl_80535FFC;
}
extern "C" {
void *fn_80335388(){
 if(!lbl_80535FFC || !(reinterpret_cast<unsigned int *>(lbl_80535FFC)[0x24/4]&4)) fn_803354A4();
 return lbl_80535FFC;
}
}
#pragma pop
