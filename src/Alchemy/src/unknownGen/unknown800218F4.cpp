#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_800218F4(int p0,int p1,int p2){
 void *value0;
 void *value1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+16))+(p2<<2));
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
 if(!value0){
  return (void *)p0;
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+-4);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+-4)=(reinterpret_cast<char *>(value1)+1);
 return value1;
}
void *igFolder_virtual60(int p0){
 void *value0;
 void *value1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
 if(!value0){
  return (void *)p0;
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+1);
 return value1;
}
}
#pragma pop
