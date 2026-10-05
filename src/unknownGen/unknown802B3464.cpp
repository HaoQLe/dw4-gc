#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B3758();
extern void *lbl_8053455C;
}
extern "C" {
void *fn_802B3464(){
 if(!lbl_8053455C || !(reinterpret_cast<unsigned int *>(lbl_8053455C)[0x24/4]&4)) fn_802B3758();
 return lbl_8053455C;
}
}
#pragma pop
