#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_80063590(int p0,int p1){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16)){
  if((int)p1>=0){
   if((int)p1<(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16))+8)){
    return (void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16))+16))+(p1<<2));
   }
  }
 }
 return (void *)0;
}
}
#pragma pop
