#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E7FDC();
extern void *lbl_80535868;
}
extern "C" {
void *fn_802E7D00(){
 if(!lbl_80535868 || !(reinterpret_cast<unsigned int *>(lbl_80535868)[0x24/4]&4)) fn_802E7FDC();
 return lbl_80535868;
}
}
#pragma pop
