#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013CFFC();
extern void *lbl_80563F24;
}
extern "C" {
void *fn_8013CEF4(){
 if(!lbl_80563F24 || !(reinterpret_cast<unsigned int *>(lbl_80563F24)[0x24/4]&4)) fn_8013CFFC();
 return lbl_80563F24;
}
}
#pragma pop
