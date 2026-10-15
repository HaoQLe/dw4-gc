#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveUtilInfoRam_arkRegister();
extern void *beSaveUtilInfoRam_meta;
}
extern "C" {
void *beSaveUtilInfoRam_getMeta(){
 if(!beSaveUtilInfoRam_meta || !(reinterpret_cast<unsigned int *>(beSaveUtilInfoRam_meta)[0x24/4]&4)) beSaveUtilInfoRam_arkRegister();
 return beSaveUtilInfoRam_meta;
}
}
#pragma pop
