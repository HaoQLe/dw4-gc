#include <unknownGen.h>
#include <meta/igQuaternionfList.h>
#include <meta/igTransformSequence1_5.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *igTransformSequence1_5_virtualC0(int p0,int p1){
 if(((unsigned int)reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_drivenChannels&0x4)){
  return (void *)(int)((int)reinterpret_cast<Meta::igQuaternionfList *>(reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_quatList)->_data+(p1<<4));
 }
 return (void *)0;
}
void *igTransformSequence1_5_virtualB4(int p0,int p1){
 if(((unsigned int)reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_drivenChannels&0x2)){
  return (void *)(int)((int)reinterpret_cast<Meta::igQuaternionfList *>(reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_quatList)->_data+(p1<<4));
 }
 return (void *)0;
}
}
#pragma pop
