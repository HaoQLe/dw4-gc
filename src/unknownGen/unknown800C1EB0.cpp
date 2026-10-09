#include <unknownGen.h>
#include <meta/igParticleArray.h>
#include <meta/igParticleAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void igParticleAttr_virtual80(int p0,int p1,int p2,int p3){
 void *value0;
 void *value1;
 void *value2;
 if((int)p1!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value0)+1);
 }
 value1=reinterpret_cast<Meta::igParticleAttr *>((void *)p0)->_particleArray;
 if(value1){
  value2=(void *)reinterpret_cast<Meta::igParticleArray *>(value1)->_refCount;
  reinterpret_cast<Meta::igParticleArray *>(value1)->_refCount=(unsigned int)(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igParticleArray *>(value1)->_refCount&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 reinterpret_cast<Meta::igParticleAttr *>((void *)p0)->_particleArray=(Meta::igParticleArray *)(void *)p1;
 reinterpret_cast<Meta::igParticleAttr *>((void *)p0)->_particleOffset=(unsigned int)(void *)p3;
 reinterpret_cast<Meta::igParticleAttr *>((void *)p0)->_particleNum=(unsigned int)(void *)p2;
}
}
#pragma pop
