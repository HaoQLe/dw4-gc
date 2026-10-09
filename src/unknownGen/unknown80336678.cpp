#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80336814();
extern void *lbl_80536098;
}
extern "C" {
void *beNDMWPanelWazaInfo_getMeta(){
 if(!lbl_80536098 || !(reinterpret_cast<unsigned int *>(lbl_80536098)[0x24/4]&4)) fn_80336814();
 return lbl_80536098;
}
}
#pragma pop
