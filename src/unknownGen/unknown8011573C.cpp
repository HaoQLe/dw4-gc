#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801158C0();
extern void *lbl_80563888;
}
extern "C" {
void *fn_8011573C(){
 if(!lbl_80563888 || !(reinterpret_cast<unsigned int *>(lbl_80563888)[0x24/4]&4)) fn_801158C0();
 return lbl_80563888;
}
}
#pragma pop
