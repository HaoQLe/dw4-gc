#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void CARDUnmount(void *);
}
extern "C" {
void fn_8031FF98(int p0){
 void *value0;
 void *value1;
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+196)){
  CARDUnmount(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20));
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52);
  if(value0){
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
    fn_80066E1C(value0);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+52)=(void *)0;
  return;
 } else {
  return;
 }
}
}
#pragma pop
