#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E1F30();
extern void *lbl_8053561C;
}
extern "C" {
void *beCameraBoxData_getMeta(){
 if(!lbl_8053561C || !(reinterpret_cast<unsigned int *>(lbl_8053561C)[0x24/4]&4)) fn_802E1F30();
 return lbl_8053561C;
}
}
#pragma pop
