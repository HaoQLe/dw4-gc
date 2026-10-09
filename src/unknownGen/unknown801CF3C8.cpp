#include <unknownGen.h>
#include <meta/igTransformSequence1_5.h>
#include <meta/igVec3fList.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *igTransformSequence1_5_virtualA4(int p0){
 if(((unsigned int)reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_drivenChannels&0x1)){
  return (void *)reinterpret_cast<Meta::igVec3fList *>(reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_xlateList)->_count;
 }
 return (void *)0;
}
void *igTransformSequence1_5_virtual114(int p0){
 if(((unsigned int)reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_drivenChannels&0x8)){
  return (void *)reinterpret_cast<Meta::igVec3fList *>(reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_scaleList)->_count;
 }
 return (void *)0;
}
}
#pragma pop
