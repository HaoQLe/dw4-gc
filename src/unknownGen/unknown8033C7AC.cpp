#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8033C8A8();
extern void *lbl_805362F8;
}
extern "C" {
void *beNDMWLoadIntf2ChrDataSel_getMeta(){
 if(!lbl_805362F8 || !(reinterpret_cast<unsigned int *>(lbl_805362F8)[0x24/4]&4)) fn_8033C8A8();
 return lbl_805362F8;
}
}
#pragma pop
