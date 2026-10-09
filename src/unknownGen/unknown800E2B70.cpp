#include <unknownGen.h>
#include <meta/igGamecubeVertexArray1_1.h>
#include <meta/igMemoryPool.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667CC(void *);
void *fn_80068430(void *);
}
extern "C" {
void igGamecubeVertexArray1_1_virtual34(int p0){
 void *value3;
 void *value0;
 void *value1;
 void *value2;
 fn_800667CC((void *)p0);
 value3=fn_80068430((void *)p0);
 if((int)(int)value3!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+4)=(reinterpret_cast<char *>(value0)+1);
 }
 value1=reinterpret_cast<Meta::igGamecubeVertexArray1_1 *>((void *)p0)->_memPool;
 if(value1){
  value2=(void *)reinterpret_cast<Meta::igMemoryPool *>(value1)->_refCount;
  reinterpret_cast<Meta::igMemoryPool *>(value1)->_refCount=(unsigned int)(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igMemoryPool *>(value1)->_refCount&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 reinterpret_cast<Meta::igGamecubeVertexArray1_1 *>((void *)p0)->_memPool=(Meta::igMemoryPool *)value3;
}
}
#pragma pop
