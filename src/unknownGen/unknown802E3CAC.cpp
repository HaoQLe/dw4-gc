#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E3CF8();
extern void *lbl_8053570C;
}
extern "C" {
void *fn_802E3CAC(){
 if(!lbl_8053570C || !(reinterpret_cast<unsigned int *>(lbl_8053570C)[0x24/4]&4)) fn_802E3CF8();
 return lbl_8053570C;
}
}
#pragma pop
