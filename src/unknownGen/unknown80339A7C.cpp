#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80339BEC();
extern void *lbl_805361E8;
}
extern "C" {
void *fn_80339A7C(){
 if(!lbl_805361E8 || !(reinterpret_cast<unsigned int *>(lbl_805361E8)[0x24/4]&4)) fn_80339BEC();
 return lbl_805361E8;
}
}
#pragma pop
