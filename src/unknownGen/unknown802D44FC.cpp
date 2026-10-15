#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beHitLandModelInfoRam_registerNow();
extern void *beHitLandModelInfoRam_meta;
}
extern "C" {
void *beHitLandModelInfoRam_getMeta(){
 if(!beHitLandModelInfoRam_meta || !(reinterpret_cast<unsigned int *>(beHitLandModelInfoRam_meta)[0x24/4]&4)) beHitLandModelInfoRam_registerNow();
 return beHitLandModelInfoRam_meta;
}
}
#pragma pop
