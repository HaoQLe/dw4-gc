#include <unknownGen.h>
#include <meta/igTransformSequence1_5.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80041810(void *,void *,int);
}
extern "C" {
void igTransformSequence1_5_virtual90(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 fn_80041810(reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_timeListLong,(void *)p1,8);
 if(((unsigned int)reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_drivenChannels&0x1)){
  fn_80041810(reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_xlateList,(void *)p1,12);
 }
 value0=(void *)(int)reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_drivenChannels;
 if((((unsigned int)(int)value0&0x2)||((unsigned int)(int)value0&0x4))){
  fn_80041810(reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_quatList,(void *)p1,16);
 }
 if(((unsigned int)reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_drivenChannels&0x8)){
  fn_80041810(reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_scaleList,(void *)p1,12);
  return;
 } else {
  return;
 }
}
}
#pragma pop
