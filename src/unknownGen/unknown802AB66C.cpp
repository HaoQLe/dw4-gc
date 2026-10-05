#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802AB744();
extern void *lbl_805343AC;
}
extern "C" {
void *fn_802AB66C(){
 if(!lbl_805343AC || !(reinterpret_cast<unsigned int *>(lbl_805343AC)[0x24/4]&4)) fn_802AB744();
 return lbl_805343AC;
}
}
#pragma pop
