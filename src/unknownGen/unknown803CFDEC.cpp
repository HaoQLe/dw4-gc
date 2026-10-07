#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_80544128[];
}
extern "C" {
void *fn_803CFDEC(int p0){
 *reinterpret_cast<void * *>((lbl_80544128+0))=(void *)p0;
 if((unsigned int)p0==0){
  return (void *)-1;
 }
 return (void *)(int)((((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+392)+-2)|(2-(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+392)))>>31);
}
}
#pragma pop
