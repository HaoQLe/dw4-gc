#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80327C38();
extern void *lbl_80535D50;
}
extern "C" {
void *fn_803279EC(){
 if(!lbl_80535D50 || !(reinterpret_cast<unsigned int *>(lbl_80535D50)[0x24/4]&4)) fn_80327C38();
 return lbl_80535D50;
}
}
#pragma pop
