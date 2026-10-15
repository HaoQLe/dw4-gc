#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igGamecubePointSpriteExt_registerNow();
extern void *igGamecubePointSpriteExt_meta;
}
extern "C" {
void *igGamecubePointSpriteExt_getMeta(){
 if(!igGamecubePointSpriteExt_meta || !(reinterpret_cast<unsigned int *>(igGamecubePointSpriteExt_meta)[0x24/4]&4)) igGamecubePointSpriteExt_registerNow();
 return igGamecubePointSpriteExt_meta;
}
}
#pragma pop
