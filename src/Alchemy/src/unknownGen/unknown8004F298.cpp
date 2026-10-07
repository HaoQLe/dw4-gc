#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004D8D8(void *);
extern void *kSuccess__3Gap;
}
extern "C" {
void fn_8004F298(int p0,int p1){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+196)!=0){
  fn_8004D8D8((void *)p1);
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
}
}
#pragma pop
