#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DA324();
extern void *lbl_80535388;
}
extern "C" {
void *fn_802DA1C8(){
 if(!lbl_80535388 || !(reinterpret_cast<unsigned int *>(lbl_80535388)[0x24/4]&4)) fn_802DA324();
 return lbl_80535388;
}
}
#pragma pop
