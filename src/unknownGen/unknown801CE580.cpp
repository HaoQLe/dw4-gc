#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igGamecubeEnvironmentMapShader_registerNow();
extern void *igGamecubeEnvironmentMapShader_meta;
}
extern "C" {
void *igGamecubeEnvironmentMapShader_getMeta(){
 if(!igGamecubeEnvironmentMapShader_meta || !(reinterpret_cast<unsigned int *>(igGamecubeEnvironmentMapShader_meta)[0x24/4]&4)) igGamecubeEnvironmentMapShader_registerNow();
 return igGamecubeEnvironmentMapShader_meta;
}
}
#pragma pop
