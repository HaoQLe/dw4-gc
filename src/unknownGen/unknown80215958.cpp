#include <unknownGen.h>
#include <meta/igCompressedAnimationSequenceQS.h>
#include <meta/igUnsignedShortList.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void igCompressedAnimationSequenceQS_virtual94(int p0){
 void *value0;
 void *value1;
 reinterpret_cast<Meta::igCompressedAnimationSequenceQS *>((void *)p0)->_channels=(unsigned char)(int)(void *)(int)((unsigned int)reinterpret_cast<Meta::igCompressedAnimationSequenceQS *>((void *)p0)->_channels&0xFE);
 value0=reinterpret_cast<Meta::igCompressedAnimationSequenceQS *>((void *)p0)->_compressedTranslationList;
 if(value0){
  value1=(void *)reinterpret_cast<Meta::igUnsignedShortList *>(value0)->_refCount;
  reinterpret_cast<Meta::igUnsignedShortList *>(value0)->_refCount=(unsigned int)(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igUnsignedShortList *>(value0)->_refCount&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 reinterpret_cast<Meta::igCompressedAnimationSequenceQS *>((void *)p0)->_compressedTranslationList=(Meta::igUnsignedShortList *)0;
}
}
#pragma pop
