#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80562158;
extern void *lbl_8056215C;
}
extern "C" {
void *fn_8005929C(int p0){
 if(((unsigned int)p0&0x1)){
  return (void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(lbl_8056215C)+0))+((p0>>1)<<2));
 }
 return (void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(lbl_80562158)+0))+((p0>>1)<<2));
}
void fn_800592D4(){}
}
#pragma pop
