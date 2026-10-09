#include <unknownGen.h>
#include <meta/igBumpMapShader.h>
#include <meta/igImage.h>
#include <meta/igTextureBindAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800C37E4(void *,int);
}
extern "C" {
void igBumpMapShader_virtual94(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value6;
 void *value3;
 void *value4;
 void *value5;
 if((int)p1!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value0)+1);
 }
 value1=reinterpret_cast<Meta::igBumpMapShader *>((void *)p0)->_bumpTex;
 if(value1){
  value2=(void *)reinterpret_cast<Meta::igTextureBindAttr *>(value1)->_refCount;
  reinterpret_cast<Meta::igTextureBindAttr *>(value1)->_refCount=(unsigned int)(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igTextureBindAttr *>(value1)->_refCount&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 reinterpret_cast<Meta::igBumpMapShader *>((void *)p0)->_bumpTex=(Meta::igTextureBindAttr *)(void *)p1;
 if((unsigned int)p1!=0){
  value6=fn_800C37E4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+12),0);
  if((int)(int)value6!=0){
   value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+4)=(reinterpret_cast<char *>(value3)+1);
  }
  value4=reinterpret_cast<Meta::igBumpMapShader *>((void *)p0)->_bumpTexImage;
  if(value4){
   value5=(void *)reinterpret_cast<Meta::igImage *>(value4)->_refCount;
   reinterpret_cast<Meta::igImage *>(value4)->_refCount=(unsigned int)(reinterpret_cast<char *>(value5)+-1);
   if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igImage *>(value4)->_refCount&0x7FFFFF)){
    fn_80066E1C(value4);
   }
  }
  reinterpret_cast<Meta::igBumpMapShader *>((void *)p0)->_bumpTexImage=(Meta::igImage *)value6;
  return;
 } else {
  return;
 }
}
}
#pragma pop
