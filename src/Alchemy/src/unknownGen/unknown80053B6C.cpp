#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_80053B6C(int p0,int p1){
 void *value0;
 if((int)p1<(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)){
  value0=(void *)p1;
  while((int)(int)value0<(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)+-1)){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)+((int)value0<<2)))+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)+((int)value0<<2)))+4);
   value0=(reinterpret_cast<char *>(value0)+1);
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+-1);
  return (void *)p1;
 }
 return (void *)-1;
}
}
#pragma pop
