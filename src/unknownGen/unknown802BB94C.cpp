#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BBA7C();
extern void *lbl_8053481C;
}
extern "C" {
void *beSaveUtilInfoRam_getMeta(){
 if(!lbl_8053481C || !(reinterpret_cast<unsigned int *>(lbl_8053481C)[0x24/4]&4)) fn_802BBA7C();
 return lbl_8053481C;
}
}
#pragma pop
