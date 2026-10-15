#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNumberCtrlInfoRam_arkRegister();
extern void *beNumberCtrlInfoRam_meta;
}
extern "C" {
void *beNumberCtrlInfoRam_getMeta(){
 if(!beNumberCtrlInfoRam_meta || !(reinterpret_cast<unsigned int *>(beNumberCtrlInfoRam_meta)[0x24/4]&4)) beNumberCtrlInfoRam_arkRegister();
 return beNumberCtrlInfoRam_meta;
}
}
#pragma pop
