#include <unknownGen.h>
#include <meta/igLongList.h>
#include <meta/igQuaternionfList.h>
#include <meta/igTransformSequence1_5.h>
#include <meta/igVec3fList.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80041660(void *,void *,int);
}
extern "C" {
void igTransformSequence1_5_virtual98(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 value0=reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_timeListLong;
 if((int)p1>=0){
  if((int)p1<=(int)(int)(void *)reinterpret_cast<Meta::igLongList *>(value0)->_capacity){
   reinterpret_cast<Meta::igLongList *>(value0)->_count=(int)(void *)p1;
  } else {
   fn_80041660(value0,(void *)p1,8);
  }
 }
 if((((unsigned int)reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_drivenChannels&0x1)&&(value1=reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_xlateList,(int)p1>=0))){
  if((int)p1<=(int)(int)(void *)reinterpret_cast<Meta::igVec3fList *>(value1)->_capacity){
   reinterpret_cast<Meta::igVec3fList *>(value1)->_count=(int)(void *)p1;
  } else {
   fn_80041660(value1,(void *)p1,12);
  }
 }
 if(((((unsigned int)reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_drivenChannels&0x2)||((unsigned int)reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_drivenChannels&0x4))&&(value2=reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_quatList,(int)p1>=0))){
  if((int)p1<=(int)(int)(void *)reinterpret_cast<Meta::igQuaternionfList *>(value2)->_capacity){
   reinterpret_cast<Meta::igQuaternionfList *>(value2)->_count=(int)(void *)p1;
  } else {
   fn_80041660(value2,(void *)p1,16);
  }
 }
 if((((unsigned int)reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_drivenChannels&0x8)&&(value3=reinterpret_cast<Meta::igTransformSequence1_5 *>((void *)p0)->_scaleList,(int)p1>=0))){
  if((int)p1<=(int)(int)(void *)reinterpret_cast<Meta::igVec3fList *>(value3)->_capacity){
   reinterpret_cast<Meta::igVec3fList *>(value3)->_count=(int)(void *)p1;
   return;
  } else {
   fn_80041660(value3,(void *)p1,12);
   return;
  }
 }
}
}
#pragma pop
