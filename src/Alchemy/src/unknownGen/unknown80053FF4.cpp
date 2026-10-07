#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80054050(void *);
void fn_80054184(void *);
void fn_80073060(void *,int);
}
extern "C" {
void *fn_80053FF4(int p0,int p1){
 if((int)p0!=0){
  fn_80054050((void *)p0);
  fn_80073060(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0),1);
  if((int)(short)p1>0){
   fn_80054184((void *)p0);
  }
 }
 return (void *)p0;
}
}
#pragma pop
