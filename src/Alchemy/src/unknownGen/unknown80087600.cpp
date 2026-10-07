#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_80087600(int p0,int p1){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+96)){
  if((int)p1>=0){
   if((int)p1<=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+92)){
    return (void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+96)+(p1<<4));
   }
  }
 }
 return (void *)0;
}
}
#pragma pop
