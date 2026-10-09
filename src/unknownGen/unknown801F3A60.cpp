#include <unknownGen.h>
#include <meta/igBitMask.h>
#include <meta/igShaderProcessor.h>
#include <meta/igSimpleShader.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80041660(void *,int,int);
void *fn_80068430(int,int);
void *fn_801BDE9C(void *);
void *igSimpleShader_virtual7C(void *);
}
extern "C" {
void *igInterpretedShader_virtual7C(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value3;
 void *value0;
 void *value1;
 void *value4;
 void *value2;
 void *value5;
 value3=fn_80068430((int)(int)((void *)p0),(int)(int)((void *)p1));
 value0=reinterpret_cast<Meta::igSimpleShader *>((void *)p0)->_processor;
 if(value0){
  value1=(void *)reinterpret_cast<Meta::igShaderProcessor *>(value0)->_refCount;
  reinterpret_cast<Meta::igShaderProcessor *>(value0)->_refCount=(unsigned int)(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igShaderProcessor *>(value0)->_refCount&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 value4=fn_801BDE9C(value3);
 reinterpret_cast<Meta::igSimpleShader *>((void *)p0)->_processor=(Meta::igShaderProcessor *)value4;
 igSimpleShader_virtual7C((void *)p0);
 value2=reinterpret_cast<Meta::igSimpleShader *>((void *)p0)->_passMask;
 reinterpret_cast<Meta::igBitMask *>(value2)->_bitCount=(unsigned int)0;
 if((int)(int)(void *)reinterpret_cast<Meta::igBitMask *>(value2)->_capacity>=0){
  reinterpret_cast<Meta::igBitMask *>(value2)->_count=(int)0;
  return value2;
 } else {
  value5=fn_80041660(value2,0,4);
  return value5;
 }
}
}
#pragma pop
