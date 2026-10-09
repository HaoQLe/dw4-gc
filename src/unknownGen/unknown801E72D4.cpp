#include <unknownGen.h>
#include <meta/igGamecubeEnvironmentMapShader.h>
#include <meta/igTextureBindAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void igGamecubeEnvironmentMapShader_virtual98(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 if((int)p1!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value0)+1);
 }
 value1=reinterpret_cast<Meta::igGamecubeEnvironmentMapShader *>((void *)p0)->_diffuseTextureBind;
 if(value1){
  value2=(void *)reinterpret_cast<Meta::igTextureBindAttr *>(value1)->_refCount;
  reinterpret_cast<Meta::igTextureBindAttr *>(value1)->_refCount=(unsigned int)(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igTextureBindAttr *>(value1)->_refCount&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 reinterpret_cast<Meta::igGamecubeEnvironmentMapShader *>((void *)p0)->_diffuseTextureBind=(Meta::igTextureBindAttr *)(void *)p1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+60)=0;
}
}
#pragma pop
