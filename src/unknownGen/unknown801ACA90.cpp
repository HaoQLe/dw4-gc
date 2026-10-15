#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igTimeTransform1_5_registerNow();
extern void *igTimeTransform1_5_meta;
}
extern "C" {
void *igTimeTransform1_5_getMeta(){
 if(!igTimeTransform1_5_meta || !(reinterpret_cast<unsigned int *>(igTimeTransform1_5_meta)[0x24/4]&4)) igTimeTransform1_5_registerNow();
 return igTimeTransform1_5_meta;
}
}
#pragma pop
