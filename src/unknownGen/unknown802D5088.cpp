#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D52E4();
extern void *lbl_805351DC;
}
extern "C" {
void *fn_802D5088(){
 if(!lbl_805351DC || !(reinterpret_cast<unsigned int *>(lbl_805351DC)[0x24/4]&4)) fn_802D52E4();
 return lbl_805351DC;
}
}
#pragma pop
