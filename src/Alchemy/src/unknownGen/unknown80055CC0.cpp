#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80055464(void *,void *);
}
extern "C" {
void *igMemoryDictionary_virtual114(int p0,int p1){
 void *value0;
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+44)){
  return (void *)-1;
 }
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56)==0){
  return (void *)-1;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+56)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56))+-1);
 value0=(void *)-1;
 if((unsigned int)(unsigned char)p1==(unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60))+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56))){
  value0=(void *)p1;
 }
 return value0;
}
void *igMemoryDictionary_virtual118(int p0,int p1){
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+44)){
  return (void *)-1;
 } else {
  if((int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56)+1)>=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52)){
   fn_80055464((void *)p0,(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56))+1));
  }
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60))+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56))=(unsigned char)p1;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+56)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56))+1);
  return (void *)(void *)(int)(unsigned char)p1;
 }
}
}
#pragma pop
