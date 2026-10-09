#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igParticleArray_virtual34(void *);
}
extern "C" {
void ParticleArray_virtual34(int p0){
 void *value0;
 igParticleArray_virtual34((void *)p0);
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
 if(!value0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=(void *)180;
 }
}
}
#pragma pop
