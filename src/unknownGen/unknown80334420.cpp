#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWStageCtlInfoRam_registerNow();
extern void *beNDMWStageCtlInfoRam_meta;
}
extern "C" {
void *beNDMWStageCtlInfoRam_getMeta(){
 if(!beNDMWStageCtlInfoRam_meta || !(reinterpret_cast<unsigned int *>(beNDMWStageCtlInfoRam_meta)[0x24/4]&4)) beNDMWStageCtlInfoRam_registerNow();
 return beNDMWStageCtlInfoRam_meta;
}
}
#pragma pop
