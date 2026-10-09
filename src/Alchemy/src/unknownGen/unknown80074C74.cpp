#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80041660(void *,void *,int);
extern void *kSuccess__3Gap;
}
extern "C" {
void igSymbolTable_virtual60(int p0,int p1,int p2){
 void *value0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+28);
 if((int)(p2<<2)>=0){
  if((int)(p2<<2)<=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+12)){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+8)=(void *)(int)(p2<<2);
  } else {
   fn_80041660(value0,(void *)(int)(p2<<2),4);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
}
}
#pragma pop
