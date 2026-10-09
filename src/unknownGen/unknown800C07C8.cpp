#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800C0538(void *);
}
extern "C" {
void igGeometrySetAttr_virtual74(int p0){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24)!=0){
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16)==-1){
   fn_800C0538((void *)p0);
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop
