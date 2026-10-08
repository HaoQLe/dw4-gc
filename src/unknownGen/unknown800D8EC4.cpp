#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068204(void *,void *,int);
void fn_80068390(void *,void *);
void *memcpy(void *,void *,void *);
}
extern "C" {
void *fn_800D8EC4(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *value2;
 if((unsigned int)p0!=(unsigned int)p1){
  if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20)){
   fn_80068390((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20));
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)0;
  }
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=value0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+12);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+16);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+24);
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+29)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+29);
  if((unsigned char)p2){
   value1=fn_80068204((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24),128);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=value1;
   value2=memcpy(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+20),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24));
   return value2;
  } else {
   return value0;
  }
 }
 return (void *)p0;
}
}
#pragma pop
