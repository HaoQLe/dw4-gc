#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beHitLandDelivInfo_registerNow();
extern void *beHitLandDelivInfo_meta;
}
extern "C" {
void *beHitLandDelivInfo_getMeta(){
 if(!beHitLandDelivInfo_meta || !(reinterpret_cast<unsigned int *>(beHitLandDelivInfo_meta)[0x24/4]&4)) beHitLandDelivInfo_registerNow();
 return beHitLandDelivInfo_meta;
}
}
#pragma pop
