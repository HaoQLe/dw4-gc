#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80339EA4();
extern void *lbl_805361EC;
}
extern "C" {
void *fn_80339D34(){
 if(!lbl_805361EC || !(reinterpret_cast<unsigned int *>(lbl_805361EC)[0x24/4]&4)) fn_80339EA4();
 return lbl_805361EC;
}
}
#pragma pop
