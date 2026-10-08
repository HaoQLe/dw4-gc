#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_80546B10[];
}
extern "C" {
void *fn_803E815C(int p0){
 *reinterpret_cast<void * *>((lbl_80546B10+0))=(void *)p0;
 if((unsigned int)p0==0){
  return (void *)-1;
 }
 return (void *)(int)(-(((unsigned int)__cntlzw((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+72))>>5)&0x1));
}
}
#pragma pop
