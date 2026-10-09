#include <unknownGen.h>
#include <meta/igTransformSequence1_5.h>
#include <meta/igVec3fList.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void igTransformSequence1_5_virtual110(int p0){
 void *value0;
 void *value1;
 reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_drivenChannels=(unsigned char)(int)(void *)(int)(reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_drivenChannels&0xF7);
 value0=reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_scaleList;
 if(value0){
  value1=(void *)reinterpret_cast<Meta::igVec3fList *>(value0)->_refCount;
  reinterpret_cast<Meta::igVec3fList *>(value0)->_refCount=(unsigned int)(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igVec3fList *>(value0)->_refCount&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_scaleList=(Meta::igVec3fList *)0;
}
}
#pragma pop
