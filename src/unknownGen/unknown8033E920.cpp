#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8033EB04();
extern void *lbl_80536518;
}
extern "C" {
void *beNDMWLoadCtrl2Info_getMeta(){
 if(!lbl_80536518 || !(reinterpret_cast<unsigned int *>(lbl_80536518)[0x24/4]&4)) fn_8033EB04();
 return lbl_80536518;
}
}
#pragma pop
