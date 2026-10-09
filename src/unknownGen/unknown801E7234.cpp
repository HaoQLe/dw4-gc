#include <unknownGen.h>
#include <meta/igGamecubeEnvironmentMapShader.h>
#include <meta/igTextureCubeAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800C37E4(void *,int);
void fn_801E754C(void *);
}
extern "C" {
void igGamecubeEnvironmentMapShader_virtual94(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 if((int)p1!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value0)+1);
 }
 value1=reinterpret_cast<Meta::igGamecubeEnvironmentMapShader *>((void *)p0)->_envMapTexture;
 if(value1){
  value2=(void *)reinterpret_cast<Meta::igTextureCubeAttr *>(value1)->_refCount;
  reinterpret_cast<Meta::igTextureCubeAttr *>(value1)->_refCount=(unsigned int)(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igTextureCubeAttr *>(value1)->_refCount&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 reinterpret_cast<Meta::igGamecubeEnvironmentMapShader *>((void *)p0)->_envMapTexture=(Meta::igTextureCubeAttr *)(void *)p1;
 reinterpret_cast<Meta::igTextureCubeAttr *>(reinterpret_cast<Meta::igGamecubeEnvironmentMapShader *>((void *)p0)->_envMapTexture)->_applyType=(int)0;
 value3=fn_800C37E4(reinterpret_cast<Meta::igGamecubeEnvironmentMapShader *>((void *)p0)->_envMapTexture,0);
 if(!value3){
  fn_801E754C(reinterpret_cast<Meta::igGamecubeEnvironmentMapShader *>((void *)p0)->_envMapTexture);
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+60)=0;
}
}
#pragma pop
