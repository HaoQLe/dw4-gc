#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_803F42B4();
}
extern "C" {
void *fn_803F1F74(int p0){
 if((unsigned int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+72)+-1)>3){
  return (void *)1;
 }
 return (void *)(int)((unsigned int)__cntlzw((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+68))>>5);
}
void *fn_803F1F9C(){return fn_803F42B4();}
}
#pragma pop
