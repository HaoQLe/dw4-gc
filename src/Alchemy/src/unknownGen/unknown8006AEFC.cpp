#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_8055D4C4[1];
}
extern "C" {
void *fn_8006AEFC(int p0,int p1){
 if(!(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))+16))+(p1<<2))){
  return (void *)0;
 }
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))+16))+(p1<<2)))+8)){
  return *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))+16))+(p1<<2)))+8);
 }
 return lbl_8055D4C4;
}
}
#pragma pop
