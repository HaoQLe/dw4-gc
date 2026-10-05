#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BFA34();
extern void *lbl_805349BC;
}
extern "C" {
void *fn_802BF994(){
 if(!lbl_805349BC || !(reinterpret_cast<unsigned int *>(lbl_805349BC)[0x24/4]&4)) fn_802BFA34();
 return lbl_805349BC;
}
}
#pragma pop
