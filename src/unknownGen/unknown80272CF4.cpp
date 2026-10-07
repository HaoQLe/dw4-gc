#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_80272CF4(int p0,int p1){
 if((int)p1>=0){
  return (void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16)+((p1+-1)<<4));
 }
 return (void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0)+(p1<<4));
}
}
#pragma pop
