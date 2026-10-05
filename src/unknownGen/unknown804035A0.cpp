#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80403764();
extern void *lbl_8055C744;
}
extern "C" {
void *fn_804035A0(){
 if(!lbl_8055C744 || !(reinterpret_cast<unsigned int *>(lbl_8055C744)[0x24/4]&4)) fn_80403764();
 return lbl_8055C744;
}
}
#pragma pop
