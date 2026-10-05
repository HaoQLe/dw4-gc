#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DBF40();
extern void *lbl_80535438;
}
extern "C" {
void *fn_802DBE80(){
 if(!lbl_80535438 || !(reinterpret_cast<unsigned int *>(lbl_80535438)[0x24/4]&4)) fn_802DBF40();
 return lbl_80535438;
}
}
#pragma pop
