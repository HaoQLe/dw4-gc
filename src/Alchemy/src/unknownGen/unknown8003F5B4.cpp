#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80041660(void *,int,int);
extern void *lbl_8055D7B4;
}
extern "C" {
void *igCallStackTracer_virtual60(int p0){
 void *value0;
 void *value1;
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)>=1){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)1;
 } else {
  fn_80041660((void *)p0,1,4);
 }
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 if((int)(int)value0!=0){
  if((int)(int)value0>0){
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+0)=lbl_8055D7B4;
  }
 }
 return *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
}
}
#pragma pop
