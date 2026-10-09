#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80335EB0();
extern void *lbl_80536064;
}
extern "C" {
void *beNDMWSaveCtrlInfo_getMeta(){
 if(!lbl_80536064 || !(reinterpret_cast<unsigned int *>(lbl_80536064)[0x24/4]&4)) fn_80335EB0();
 return lbl_80536064;
}
}
#pragma pop
