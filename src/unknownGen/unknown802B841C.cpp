#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beStaticInfo_registerNow();
extern void *beStaticInfo_meta;
}
extern "C" {
void *beStaticInfo_getMeta(){
 if(!beStaticInfo_meta || !(reinterpret_cast<unsigned int *>(beStaticInfo_meta)[0x24/4]&4)) beStaticInfo_registerNow();
 return beStaticInfo_meta;
}
}
#pragma pop
