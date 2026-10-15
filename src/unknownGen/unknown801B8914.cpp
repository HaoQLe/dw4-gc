#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igMultiResolutionMeshInstance_registerNow();
extern void *igMultiResolutionMeshInstance_meta;
}
extern "C" {
void *igMultiResolutionMeshInstance_getMeta(){
 if(!igMultiResolutionMeshInstance_meta || !(reinterpret_cast<unsigned int *>(igMultiResolutionMeshInstance_meta)[0x24/4]&4)) igMultiResolutionMeshInstance_registerNow();
 return igMultiResolutionMeshInstance_meta;
}
}
#pragma pop
