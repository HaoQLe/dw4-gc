#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_80185A40(int p0,int p1,int p2,int p3){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56);
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8)==0){
  return value0;
 }
 if((int)p1<0){
  return value0;
 }
 if((int)p1>=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8)){
  return value0;
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+16);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)(int)((int)value1+(p1<<3)))+4)=(void *)p3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)(int)((int)value1+(p1<<3)))+0)=(void *)p2;
 return (void *)(int)((int)value1+(p1<<3));
}
}
#pragma pop
