#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DF9F8();
extern void *lbl_80535570;
}
extern "C" {
void *fn_802DF964(){
 if(!lbl_80535570 || !(reinterpret_cast<unsigned int *>(lbl_80535570)[0x24/4]&4)) fn_802DF9F8();
 return lbl_80535570;
}
}
#pragma pop
