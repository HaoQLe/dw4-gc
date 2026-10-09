#include <unknownGen.h>
#include <meta/igEventTracker.h>
#include <meta/igStackMemoryPool.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068430(void *,void *);
}
extern "C" {
void igStackMemoryPool_virtual168(int p0,int p1){
 void *value3;
 void *value0;
 void *value1;
 void *value2;
 if((int)p1!=0){
  value3=fn_80068430((void *)p1,(void *)p1);
  if((unsigned int)(int)value3==(unsigned int)p0){
   return;
  }
 }
 if((unsigned int)p1!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value0)+1);
 }
 value1=reinterpret_cast<Meta::igStackMemoryPool *>((void *)p0)->_eventTracker;
 if(value1){
  value2=(void *)reinterpret_cast<Meta::igEventTracker *>(value1)->_refCount;
  reinterpret_cast<Meta::igEventTracker *>(value1)->_refCount=(unsigned int)(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igEventTracker *>(value1)->_refCount&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 reinterpret_cast<Meta::igStackMemoryPool *>((void *)p0)->_eventTracker=(Meta::igEventTracker *)(void *)p1;
}
}
#pragma pop
