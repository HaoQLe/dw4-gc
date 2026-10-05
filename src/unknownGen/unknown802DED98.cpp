#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DEF08();
extern void *lbl_805354FC;
}
extern "C" {
void *fn_802DED98(){
 if(!lbl_805354FC || !(reinterpret_cast<unsigned int *>(lbl_805354FC)[0x24/4]&4)) fn_802DEF08();
 return lbl_805354FC;
}
}
#pragma pop
