#include <unknownGen.h>
#include <meta/igFloatList.h>
#include <meta/igPointerList.h>
#include <meta/igVector3MorphData.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80041660(void *,void *,int);
}
extern "C" {
void igVector3MorphData_virtual60(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 if((int)p1!=(int)(int)(void *)reinterpret_cast<Meta::igVector3MorphData *>((void *)p0)->_activeCount){
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+40)=1;
  value0=reinterpret_cast<Meta::igVector3MorphData *>((void *)p0)->_activeTargets;
  if((int)p1>=0){
   if((int)p1<=(int)(int)(void *)reinterpret_cast<Meta::igPointerList *>(value0)->_capacity){
    reinterpret_cast<Meta::igPointerList *>(value0)->_count=(int)(void *)p1;
   } else {
    fn_80041660(value0,(void *)p1,4);
   }
  }
  value1=reinterpret_cast<Meta::igVector3MorphData *>((void *)p0)->_activeCoeff;
  if((int)p1>=0){
   if((int)p1<=(int)(int)(void *)reinterpret_cast<Meta::igFloatList *>(value1)->_capacity){
    reinterpret_cast<Meta::igFloatList *>(value1)->_count=(int)(void *)p1;
   } else {
    fn_80041660(value1,(void *)p1,4);
   }
  }
  reinterpret_cast<Meta::igVector3MorphData *>((void *)p0)->_activeCount=(int)(void *)p1;
  return;
 } else {
  return;
 }
}
}
#pragma pop
