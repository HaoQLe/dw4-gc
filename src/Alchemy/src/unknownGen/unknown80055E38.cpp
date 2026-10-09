#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80055464(void *,void *);
void memcpy(void *,void *,void *);
void *strlen(void *,void *);
}
extern "C" {
void *igMemoryDictionary_virtual120(int p0,int p1){
 void *value0;
 if((int)p1==0){
  return (void *)-1;
 } else {
  if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+44)){
   return (void *)-1;
  } else {
   value0=strlen((void *)p1,(void *)p1);
   if((int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56)+(int)value0)>=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52)){
    fn_80055464((void *)p0,(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56)+(int)value0));
   }
   memcpy((void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60)+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56)),(void *)p1,value0);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+56)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56)+(int)value0);
   return value0;
  }
 }
}
}
#pragma pop
