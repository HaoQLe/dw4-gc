#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803397EC();
extern void *lbl_805361BC;
}
extern "C" {
void *fn_80339750(){
 if(!lbl_805361BC || !(reinterpret_cast<unsigned int *>(lbl_805361BC)[0x24/4]&4)) fn_803397EC();
 return lbl_805361BC;
}
}
#pragma pop
