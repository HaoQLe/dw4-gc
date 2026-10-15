#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBkColorInfo_registerNow();
extern void *beBkColorInfo_meta;
}
extern "C" {
void *beBkColorInfo_getMeta(){
 if(!beBkColorInfo_meta || !(reinterpret_cast<unsigned int *>(beBkColorInfo_meta)[0x24/4]&4)) beBkColorInfo_registerNow();
 return beBkColorInfo_meta;
}
}
#pragma pop
