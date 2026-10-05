#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80403150();
extern void *lbl_8055C700;
}
extern "C" {
void *fn_80402EB0(){
 if(!lbl_8055C700 || !(reinterpret_cast<unsigned int *>(lbl_8055C700)[0x24/4]&4)) fn_80403150();
 return lbl_8055C700;
}
}
#pragma pop
