#include <unknownGen.h>
#include <meta/igBlendFunctionAttr.h>
#include <meta/igGamecubeEnvironmentMapShader.h>
#include <meta/igTextureAttr.h>
#include <meta/igTextureBindAttr.h>
#include <meta/igTextureFunctionAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801E6CE8(void *);
}
extern "C" {
void igGamecubeEnvironmentMapShader_virtualD0(int p0){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 fn_801E6CE8((void *)p0);
 value0=reinterpret_cast<Meta::igGamecubeEnvironmentMapShader *>((void *)p0)->_envMapBlendFunc;
 if(value0){
  value1=(void *)reinterpret_cast<Meta::igBlendFunctionAttr *>(value0)->_refCount;
  reinterpret_cast<Meta::igBlendFunctionAttr *>(value0)->_refCount=(unsigned int)(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igBlendFunctionAttr *>(value0)->_refCount&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 reinterpret_cast<Meta::igGamecubeEnvironmentMapShader *>((void *)p0)->_envMapBlendFunc=(Meta::igBlendFunctionAttr *)0;
 reinterpret_cast<Meta::igGamecubeEnvironmentMapShader *>((void *)p0)->_reflectionScale=255;
 value2=reinterpret_cast<Meta::igGamecubeEnvironmentMapShader *>((void *)p0)->_scaleTexture;
 if(value2){
  value3=(void *)reinterpret_cast<Meta::igTextureAttr *>(value2)->_refCount;
  reinterpret_cast<Meta::igTextureAttr *>(value2)->_refCount=(unsigned int)(reinterpret_cast<char *>(value3)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igTextureAttr *>(value2)->_refCount&0x7FFFFF)){
   fn_80066E1C(value2);
  }
 }
 reinterpret_cast<Meta::igGamecubeEnvironmentMapShader *>((void *)p0)->_scaleTexture=(Meta::igTextureAttr *)0;
 value4=reinterpret_cast<Meta::igGamecubeEnvironmentMapShader *>((void *)p0)->_scaleTextureBind;
 if(value4){
  value5=(void *)reinterpret_cast<Meta::igTextureBindAttr *>(value4)->_refCount;
  reinterpret_cast<Meta::igTextureBindAttr *>(value4)->_refCount=(unsigned int)(reinterpret_cast<char *>(value5)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igTextureBindAttr *>(value4)->_refCount&0x7FFFFF)){
   fn_80066E1C(value4);
  }
 }
 reinterpret_cast<Meta::igGamecubeEnvironmentMapShader *>((void *)p0)->_scaleTextureBind=(Meta::igTextureBindAttr *)0;
 value6=reinterpret_cast<Meta::igGamecubeEnvironmentMapShader *>((void *)p0)->_scaleTextureFunc;
 if(value6){
  value7=(void *)reinterpret_cast<Meta::igTextureFunctionAttr *>(value6)->_refCount;
  reinterpret_cast<Meta::igTextureFunctionAttr *>(value6)->_refCount=(unsigned int)(reinterpret_cast<char *>(value7)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igTextureFunctionAttr *>(value6)->_refCount&0x7FFFFF)){
   fn_80066E1C(value6);
  }
 }
 reinterpret_cast<Meta::igGamecubeEnvironmentMapShader *>((void *)p0)->_scaleTextureFunc=(Meta::igTextureFunctionAttr *)0;
}
}
#pragma pop
