#include <unknownGen.h>
#include <meta/igChangePlayMode.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
extern void *igTransformSequence1_5_meta;
extern void *igEnbayaAnimationSource_meta;
}
extern "C" {
void igChangePlayMode_virtual88(int p0,int p1){
 void *value1;
 void *value2;
 void *value0;
 value1=fn_80068128((void *)p1,igTransformSequence1_5_meta);
 if((unsigned char)(int)value1){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+36)=(void *)(int)reinterpret_cast<Meta::igChangePlayMode *>((void *)p0)->_playMode;
  return;
 } else {
  value2=fn_80068128((void *)p1,igEnbayaAnimationSource_meta);
  if((unsigned char)(int)value2){
   value0=(void *)(int)reinterpret_cast<Meta::igChangePlayMode *>((void *)p0)->_playMode;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+12)=value0;
  }
  return;
 }
}
}
#pragma pop
