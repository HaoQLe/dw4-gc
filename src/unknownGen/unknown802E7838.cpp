#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void ParticleArray_arkRegister();
extern void *ParticleArray_meta;
}
extern "C" {
void *ParticleArray_getMeta(){
 if(!ParticleArray_meta || !(reinterpret_cast<unsigned int *>(ParticleArray_meta)[0x24/4]&4)) ParticleArray_arkRegister();
 return ParticleArray_meta;
}
}
#pragma pop
