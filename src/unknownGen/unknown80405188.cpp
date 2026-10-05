#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80405228();
extern void *lbl_8055C860;
}
extern "C" {
void *fn_80405188(){
 if(!lbl_8055C860 || !(reinterpret_cast<unsigned int *>(lbl_8055C860)[0x24/4]&4)) fn_80405228();
 return lbl_8055C860;
}
}
#pragma pop
