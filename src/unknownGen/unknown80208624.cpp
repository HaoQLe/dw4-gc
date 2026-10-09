#include <unknownGen.h>
#include <meta/igTransformSequence1_5.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *igTransformSequence1_5_virtualEC(int p0,int p1){
 if((int)(reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_drivenChannels&p1)==0){
  return (void *)-1;
 }
 switch((int)p1){
 case 1:
  return (void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+73);
 case 2:
 case 4:
  return (void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+74);
 case 8:
  return (void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+75);
 }
 return (void *)-1;
}
}
#pragma pop
