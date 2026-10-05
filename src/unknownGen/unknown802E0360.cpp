#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E065C();
extern void *lbl_805355BC;
}
extern "C" {
void *fn_802E0360(){
 if(!lbl_805355BC || !(reinterpret_cast<unsigned int *>(lbl_805355BC)[0x24/4]&4)) fn_802E065C();
 return lbl_805355BC;
}
}
#pragma pop
