#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igMorphInstance_registerNow();
extern void *igMorphInstance_meta;
}
extern "C" {
void *igMorphInstance_getMeta(){
 if(!igMorphInstance_meta || !(reinterpret_cast<unsigned int *>(igMorphInstance_meta)[0x24/4]&4)) igMorphInstance_registerNow();
 return igMorphInstance_meta;
}
}
#pragma pop
