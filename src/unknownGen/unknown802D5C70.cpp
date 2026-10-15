#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beHitLandDelivInfoRam_registerNow();
extern void *beHitLandDelivInfoRam_meta;
}
extern "C" {
void *beHitLandDelivInfoRam_getMeta(){
 if(!beHitLandDelivInfoRam_meta || !(reinterpret_cast<unsigned int *>(beHitLandDelivInfoRam_meta)[0x24/4]&4)) beHitLandDelivInfoRam_registerNow();
 return beHitLandDelivInfoRam_meta;
}
}
#pragma pop
