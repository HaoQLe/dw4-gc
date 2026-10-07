#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_80162E74(int p0,int p1,int p2){
 if((unsigned int)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16))+(p1<<1))<(unsigned int)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16))+(p2<<1))){
  return (void *)-1;
 }
 return (void *)(int)((unsigned int)(*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16))+(p2<<1))-*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16))+(p1<<1)))>>31);
}
}
#pragma pop
